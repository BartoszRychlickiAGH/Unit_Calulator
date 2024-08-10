#ifndef CLASSES_HPP
#define CLASSES_HPP

#include "includes.cpp"

class Amount {
private:
    float amount;
public:
    Amount(float p_amount=0.0f) :amount(p_amount) {}

    void setAmount(float p_amount) { amount = p_amount; }
    float getAmount(void) const { return amount; }

    virtual void display() = 0;
};

//currency

class Euro : public Amount{
public:
    Euro(float p_amount = 0.0f) :Amount(p_amount) {}

    virtual void display() override {
        cout << getAmount() << " €" << endl << " = " << getAmount() * 4.3249 << " PLN" << endl;
        cout << getAmount() << " €" << endl << " = " << getAmount() * 1.0917 << " $" << endl;
        cout << getAmount() << " €" << endl << " = " << getAmount() * 0.852 << " GBP" << endl;
    }

};

class PLN : public Amount { // do odwo³ywania siê do konstruktora klasy bazowe dziedziczenie musi byæ public
public:
    PLN(float p_amount = 0.0f) :Amount(p_amount) {}

    virtual void display() override {
        cout << getAmount() << " PLN" << endl << " = " << getAmount() * 0.23 << " €" << endl;
        cout << getAmount() << " PLN" << endl << " = " << getAmount() * 0.2524 << " $" << endl;
        cout << getAmount() << " PLN" << endl << " = " << getAmount() * 0.198 << " GBP" << endl;
    }
};

class GBP : public Amount{
public:
    GBP(float p_amount = 0.0f) :Amount(p_amount) {}

    virtual void display() override {
        cout << getAmount() << " GBP" << endl << " = " << getAmount() * 5.0511 << " PLN" << endl;
        cout << getAmount() << " GBP" << endl << " = " << getAmount() * 1.275 << " $" << endl;
        cout << getAmount() << " GBP" << endl << " = " << getAmount() * 1.1679 << " €" << endl;
    }
};

class USD : public Amount {
public:
    USD(float p_amount = 0.0f) :Amount(p_amount) {}

    virtual void display() override {
        cout << getAmount() << " USD" << endl << " = " << getAmount() * 5.0511 << " PLN" << endl;
        cout << getAmount() << " USD" << endl << " = " << getAmount() * 1.275 << " GBP" << endl;
        cout << getAmount() << " USD" << endl << " = " << getAmount() * 1.1679 << " €" << endl;
    }
};

//volume

class Liters : public Amount {//liters
    public:
        Liters(float p_amount) :Amount(p_amount) {}
        
        virtual void display() override {
            cout << getAmount() << " L" << " = " << getAmount() * 0.001 << " m^3" << endl;
            cout << getAmount() << " L" << " = " << getAmount() * 61.02374 << " INCH" << endl;
            cout << getAmount() << " L" << " = " << getAmount() * 0.035315 << " Feets" << endl;
            cout << getAmount() << " L" << " = " << getAmount() * 0.001308 << " Yards" << endl;
        }

};
class Metres3 : public Amount {//meters
    public:
        Metres3(float p_amount) :Amount(p_amount) {}
    
        virtual void display() override {
            cout << getAmount() << " m^3" << " = " << getAmount() * 1000 << " L" << endl;
            cout << getAmount() << " m^3" << " = " << getAmount() * 0.016387 << " INCH" << endl;
            cout << getAmount() << " m^3" << " = " << getAmount() * 28.31685 << " Feets" << endl;
            cout << getAmount() << " m^3" << " = " << getAmount() * 764.5549 << " Yards" << endl;
        }

};
class Inches3 : public Amount {//inches
    public:
        Inches3(float p_amount) :Amount(p_amount) {}
    
        virtual void display() override {
            cout << getAmount() << " INCH" << " = " << getAmount() * 0.000016 << " m^3" << endl;
            cout << getAmount() << " INCH" << " = " << getAmount() * 0.016387 << " L" << endl;
            cout << getAmount() << " INCH" << " = " << getAmount() * 0.000579 << " Feets" << endl;
            cout << getAmount() << " INCH" << " = " << getAmount() * 0.000021 << " Yards" << endl;
        }

};
class Feets3 : public Amount {//feets
public:
        Feets3(float p_amount) :Amount(p_amount) {}
    
        virtual void display() override {
            cout << getAmount() << " Feets" << " = " << getAmount() * 0.028317 << " m^3" << endl;
            cout << getAmount() << " Feets" << " = " << getAmount() * 1.728 << " INCH" << endl;
            cout << getAmount() << " Feets" << " = " << getAmount() * 28.31685 << " L" << endl;
            cout << getAmount() << " Feets" << " = " << getAmount() * 0.037037 << " Yards" << endl;
        }

};
class Yards3 : public Amount {//yards
    public:
        Yards3(float p_amount) :Amount(p_amount) {}
    
        virtual void display() override {
            cout << getAmount() << " Yards" << " = " << getAmount() * 0.764555 << " m^3" << endl;
            cout << getAmount() << " Yards" << " = " << getAmount() * 46.656 << " INCH" << endl;
            cout << getAmount() << " Yards" << " = " << getAmount() * 27 << " Feets" << endl;
            cout << getAmount() << " Yards" << " = " << getAmount() * 764.5549 << " L" << endl;
        }

};

//Length

//metres
class Metres : public Amount {
    public:
        Metres(float p_amount=0.0f):Amount(p_amount) {}

        virtual void display() override{
            cout << getAmount() <<" m" << " = " << getAmount() * 39.3701 << " INCH" << endl;
            cout << getAmount() <<" m" << " = " << getAmount() * 3.28084 << " Feets" << endl;
            cout << getAmount() <<" m" << " = " << getAmount() * 1.09361 << " Yards" << endl;
            cout << getAmount() <<" m" << " = " << getAmount() * 0.000621371 << " Miles" << endl;
        }
};

//inches
class Inches : public Amount {
public:
    Inches(float p_amount = 0.0f) :Amount(p_amount) {}

    virtual void display() override {
        cout << getAmount() << " INCH" << " = " << getAmount() * 0.0254 << " m" << endl;
        cout << getAmount() << " INCH" << " = " << getAmount() * 0.0833333 << " Feets" << endl;
        cout << getAmount() << " INCH" << " = " << getAmount() * 0.0277778 << " Yards" << endl;
        cout << getAmount() << " INCH" << " = " << getAmount() * 0.0000158 << " Miles" << endl;
    }
};

//feets
class Feets : public Amount {
public:
    Feets(float p_amount = 0.0f) :Amount(p_amount) {}

    virtual void display() override {
        cout << getAmount() << " Feets" << " = " << getAmount() * 0.3048 << " m" << endl;
        cout << getAmount() << " Feets" << " = " << getAmount() * 12 << " INCH" << endl;
        cout << getAmount() << " Feets" << " = " << getAmount() * 0.333333 << " Yards" << endl;
        cout << getAmount() << " Feets" << " = " << getAmount() * 0.000189394 << " Miles" << endl;
    }
};

//yards
class Yards : public Amount {
public:
    Yards(float p_amount = 0.0f) :Amount(p_amount) {}

    virtual void display() override {
        cout << getAmount() << " Yards" << " = " << getAmount() * 0.9144 << " m" << endl;
        cout << getAmount() << " Yards" << " = " << getAmount() * 36 << " INCH" << endl;
        cout << getAmount() << " Yards" << " = " << getAmount() * 3 << " Feets" << endl;
        cout << getAmount() << " Yards" << " = " << getAmount() * 0.000568182 << " Miles" << endl;
    }
};
//miles
class Miles : public Amount {
public:
    Miles(float p_amount = 0.0f) :Amount(p_amount) {}

    virtual void display() override {
        cout << getAmount() << " Miles" << " = " << getAmount() * 1609.34 << " m" << endl;
        cout << getAmount() << " Miles" << " = " << getAmount() * 63360 << " INCH" << endl;
        cout << getAmount() << " Miles" << " = " << getAmount() * 5280 << " Feets" << endl;
        cout << getAmount() << " Miles" << " = " << getAmount() * 1760 << " Yards" << endl;
    }
};

//mass

//kilograms
class Kilograms : public Amount {
    public:
        Kilograms(float p_amount = 0.0f) :Amount(p_amount) {}

        virtual void display() override {
			cout << getAmount() << " kg" << " = " << getAmount() * 2.20462 << " Pounds" << endl;
			cout << getAmount() << " kg" << " = " << getAmount() * 35.274 << " Ounces" << endl;
		}
};

//pounds

class Pounds : public Amount {
    public:
        Pounds(float p_amount = 0.0f) :Amount(p_amount) {}

        virtual void display() override {
            cout << getAmount() << " Pounds" << " = " << getAmount() * 0.453592 << " kg" << endl;
            cout << getAmount() << " Pounds" << " = " << getAmount() * 16 << " Ounces" << endl;
        }
};

class Ounces : public Amount {
    public:
        Ounces(float p_amount = 0.0f) :Amount(p_amount) {}

		virtual void display() override {
			cout << getAmount() << " Ounces" << " = " << getAmount() * 0.0283495 << " kg" << endl;
			cout << getAmount() << " Ounces" << " = " << getAmount() * 0.0625 << " Pounds" << endl;
		}
};

//temperature

//celcius
class Celcius : public Amount {
    public:
        Celcius(float p_amount = 0.0f) :Amount(p_amount) {}

		virtual void display() override {
			cout << getAmount() << " °C" << " = " << getAmount() + 273.15 << " K" << endl;
			cout << getAmount() << " °C" << " = " << getAmount() * 1.8 + 32 << " F" << endl;
		}
};

//kelvin
class Kelvin : public Amount {
    public:
        Kelvin(float p_amount = 0.0f) :Amount(p_amount) {}

        virtual void display() override {
            cout << getAmount() << " K" << " = " << getAmount() - 273.15 << " °C" << endl;
			cout << getAmount() << " K" << " = " << getAmount() * 1.8 - 459.67 << " F" << endl;
        }
};

//farenheit
class Farenheit : public Amount {
    public:
   	Farenheit(float p_amount = 0.0f) :Amount(p_amount) {}

	virtual void display() override {
		cout << getAmount() << " F" << " = " << (getAmount() - 32) / 1.8 << " °C" << endl;
		cout << getAmount() << " F" << " = " << (getAmount() + 459.67) / 1.8 << " K" << endl;
	}
};

#endif