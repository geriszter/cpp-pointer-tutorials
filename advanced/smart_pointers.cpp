#include <iostream>
#include <memory>
#include <vector>

// Example class to demonstrate smart pointers
class Resource {
public:
    Resource() {
        std::cout << "Resource acquired." << std::endl;
    }
    ~Resource() {
        std::cout << "Resource released." << std::endl;
    }
    void sayHello() const {
        std::cout << "Hello!" << std::endl;
    }
};

int main() {
    // Using std::unique_ptr
    std::cout << "--- std::unique_ptr Example ---" << std::endl;
    {
        std::unique_ptr<Resource> uniquePtr = std::make_unique<Resource>();  // Resource is acquired here
        uniquePtr->sayHello();

        // uniquePtr is automatically released when it goes out of scope here
    } // Resource released when uniquePtr goes out of scope

    // Using std::shared_ptr
    std::cout << "\n--- std::shared_ptr Example ---" << std::endl;
    {
        std::shared_ptr<Resource> sharedPtr1 = std::make_shared<Resource>(); // Resource is acquired here
        {
            std::shared_ptr<Resource> sharedPtr2 = sharedPtr1;               // sharedPtr2 shares ownership
            std::cout << "sharedPtr1 use count: " << sharedPtr1.use_count() << std::endl;
            std::cout << "sharedPtr2 use count: " << sharedPtr2.use_count() << std::endl;

            sharedPtr2->sayHello(); // Accessing Resource through sharedPtr2
        } // sharedPtr2 goes out of scope, but Resource is not released

        std::cout << "sharedPtr1 use count after sharedPtr2 goes out of scope: " << sharedPtr1.use_count() << std::endl;
        sharedPtr1->sayHello();
    } // Resource released when the last shared_ptr (sharedPtr1) goes out of scope

    // Using std::weak_ptr
    std::cout << "\n--- std::weak_ptr Example ---" << std::endl;
    {
        std::shared_ptr<Resource> sharedPtr = std::make_shared<Resource>(); // Resource is acquired here
        std::weak_ptr<Resource> weakPtr = sharedPtr;                        // weakPtr observes sharedPtr

        std::cout << "sharedPtr use count (with weakPtr observing): " << sharedPtr.use_count() << std::endl;

        if (auto lockedPtr = weakPtr.lock()) { // Check if Resource is still available
            lockedPtr->sayHello();
            std::cout << "Resource is still alive." << std::endl;
        }

        // Resource will be released when sharedPtr goes out of scope
    } // weakPtr does not prevent Resource from being released

    std::cout << "\nEnd of main" << std::endl;
    return 0;
}
