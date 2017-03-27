class Base {
		private: int priv;
		protected: int prot;
		public: int publ;
};

class Derived: public Base { 

void someMemberFunction() { 
		cout << priv; // ERROR: private member
		cout << prot; // okay
		cout << publ; // okay
}
};

class Unrelated { 
Base X;
void anotherMemberFunction() { 
		cout << X.priv; // ERROR: private member
		cout << X.prot; // ERROR: protected member
		cout << X.publ; // okay
}
};
