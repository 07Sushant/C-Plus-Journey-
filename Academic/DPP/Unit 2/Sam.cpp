#include <iostream>
#include <string>
#include <vector>

class WeatherForecast {
public:
    WeatherForecast() : lowestTemperature(9999.0) {}

    void addWeather(const std::string& location, float temperature) {
        locations.push_back(location);
        temperatures.push_back(temperature);
        if (temperature < lowestTemperature) {
            lowestTemperature = temperature;
            coldestLocation = location;
        }
    }

    void displayColdestLocation() const {
        std::cout << coldestLocation << std::endl;
    }

private:
    std::vector<std::string> locations;
    std::vector<float> temperatures;
    float lowestTemperature;
    std::string coldestLocation;
};

int main() {
    int N;
    std::cin >> N;

    WeatherForecast weather;

    for (int i = 0; i < N; ++i) {
        std::string location;
        float temperature;
        std::cin.ignore(); 
        std::getline(std::cin, location);
        std::cin >> temperature;
        weather.addWeather(location, temperature);
    }

    weather.displayColdestLocation();

    return 0;
}

//Sushant