using namespace std;

// Define a Car class with a method to display its speed
class Car {
public:
    void displaySpeed(int speed) {
        cout << "The car is moving at " << speed << " km/h." << endl;
    }
};

int main() {
    // Create a Car object named myCar
    Car myCar;

    // Send a message to myCar to execute the displaySpeed method
    int currentSpeed = 100;
    myCar.displaySpeed(currentSpeed);

    return 0;
}