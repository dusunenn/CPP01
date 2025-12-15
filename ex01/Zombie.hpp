#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string _name; // Zombinin ismini tutan private değişken [cite: 126]

	public:
		// Varsayılan Yapıcı (Default Constructor)
		// Dizi oluştururken (new Zombie[N]) bu yapıcı çağrılır.
		Zombie();

		// Yıkıcı (Destructor)
		// Zombi yok edildiğinde mesaj yazdırmak için [cite: 137]
		~Zombie();

		// Üye Fonksiyonlar
		void announce( void ); // Kendini duyurma fonksiyonu [cite: 127]
		
		// Setter
		// Dizi oluşturulduktan sonra isim vermek için buna ihtiyacınız var.
		void setName( std::string name );
};

// zombieHorde fonksiyon prototipi
// Bu fonksiyon main tarafından çağrılacağı için burada tanımlanması mantıklıdır.
Zombie* zombieHorde( int N, std::string name );

#endif