// Lic:
// Who is the Virus?
// Names
// 
// 
// 
// (c) Jeroen P. Broks, 2022
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// 
// Please note that some references to data like pictures or audio, do not automatically
// fall under this licenses. Mostly this is noted in the respective files.
// 
// Version: 22.11.24
// EndLic

#pragma once
namespace Virus {
	static const char
		* boys[] = {
				"Ab",
				"Abel",
				"Abraham",
				"Achmed",
				"Anders",
				"Albus",
				"Ad",
				"Adrianus",
				"Al",
				"Alex",
				"Alexander",
				"Allister",
				"Andre",
				"Andreas",
				"Anthony",
				"Anton",
				"Arjan",
				"Arnaud",
				"Axel",
				"Bernhard",
				"Bernard",
				"Ben",
				"Bennie",
				"Bart",
				"Bill",
				"Billy",
				"Brandon",
				"Bruce",
				"Carolus",
				"Charles",
				"Charlie",
				"Chuck",
				"Chuckie",
				"Conrad",
				"Cornelius",
				"Daan",
				"Dan",
				"Daniel",
				"Dave",
				"David",
				"Dick",
				"Dirk",
				"Dennis",
				"Donald",
				"Dylan",
				"Eduard",
				"Eduardo",
				"Edwin",
				"Eelco",
				"Eric",
				"Erwin",
				"Everell",
				"Felix",
				"Ferdinand",
				"Ferdy",
				"Fernando",
				"Franciscus",
				"Frans",
				"Fred",
				"Freddie",
				"Gerardus",
				"Gene",
				"Geoffrey",
				"George",
				"Han",
				"Hans",
				"Hank",
				"Harry",
				"Helmut",
				"Hendrik",
				"Henri",
				"Herman",
				"Hugo",
				"Igor",
				"Isaac",
				"Ivo",
				"James",
				"Jeroen",
				"Joe",
				"Joep",
				"Joseph",
				"John",
				"Johannes",
				"Jacob",
				"Jake",
				"Jack",
				"Joris",
				"Jim",
				"Jimmy",
				"Jon",
				"Jonathan",
				"Jude",
				"Justin",
				"Karl",
				"Kees",
				"Ken",
				"Kenny",
				"Klaas",
				"Kyle",
				"Larry",
				"Laurens",
				"Laurel",
				"Leo",
				"Leonard",
				"Mario",
				"Marinus",
				"Marcus",
				"Marco",
				"Marc",
				"Marcel",
				"Marnix",
				"Martin",
				"Max",
				"Michael",
				"Miles",
				"Mustafa",		
				"Neil",
				"Neville",				
				"Nino",
				"Nils",
				"Nick",
				"Nico",
				"Nicholas",
				"Olav",
				"Oliver",
				"Otto",
				"Peter",
				"Paul",
				"Paulus",
				"Pedro",
				"Phil",
				"Phillip", 
				"Quint",
				"Randy",
				"Rhemus",
				"Richard",
				"Ron",
				"Ronald",
				"Rudolf",
				"Roland",
				"Severus",
				"Samuel",
				"Simon",
				"Stephen",
				"Stephano",
				"Sirius",
				"Sjoerd",
				"Stan",
				"Steve",
				"Stephan",
				"Stephano",
				"Stephen",
				"Sven",
				"Theodore",
				"Theo",
				"Tinus",
				"Tom",
				"Tommie",
				"Tommy",
				"Tony",
				"Uli",
				"Valentino",
				"Victor",
				"Vladimir",
				"Wilhelmus",
				"Willem",
				"William",
				"Waldo",
				"Wally",
				"Wim",
				"Wolfgang",
				"Wout",
				"Wouter",
				"Xavier",
				"Youp",
				"Zachery",
				"Zack"
	},

		* girls[] = {
				"Agaat",
				"Agatha",
				"Alexandra",
				"Anna",
				"Amanda",
				"Angela",
				"Angelina",
				"Angelique",
				"Annelies",
				"Annette",
				"Antoinette",
				"Anita",
				"April",
				"Astrid",
				"Barb",
				"Barbra",
				"Bertha",
				"Bella",
				"Belle",
				"Brenda",
				"Carola",
				"Carolina",
				"Cecilia",
				"Celestine",
				"Celestina",
				"Celeste",
				"Candy",
				"Carla",
				"Carleyn",
				"Catootje",
				"Chantal",
				"Charlotte",
				"Cindy",
				"Clara",
				"Constanze",
				"Cyndi",
				"Cynthia",
				"Daisy",
				"Denise",
				"Donna",
				"Dorethy",
				"Ellen",
				"Ella",
				"Emma",
				"Eve",
				"Eva",
				"Elena",
				"Esmeralda",
				"Esther",
				"Fleur",
				"Florence",
				"Frederica",
				"Francesca",
				"Franka",
				"Felicia",
				"Georgia",
				"Georgina",
				"Gerardina",
				"Gerda",
				"Gina",
				"Greta",
				"Gwen",
				"Gwendolyn",
				"Hanna",
				"Heidi",
				"Hermione",
				"Hermelien",
				"Ilse",
				"Inge",
				"Jane",
				"Jill",
				"Josephine",
				"Johanna",
				"Jolanda",
				"Judith",
				"Judy",
				"Justine",
				"Karla",
				"Kate",
				"Laverne",
				"Lea",
				"Lia",
				"Maggie",
				"Marga",
				"Margaret",
				"Maria",
				"Marian",
				"Marianne",
				"Marion",
				"Marjolein",
				"Mary",
				"Mathilde",
				"Mindy",
				"Mandy",
				"Merel",
				"Mina",
				"Madelief",
				"Monica",
				"Monique",
				"Nancy",
				"Nel",
				"Nella",
				"Nelly",
				"Nicole",
				"Nicolette",
				"Nana",
				"Nina",
				"Olga",
				"Patti",
				"Patty",
				"Paula",
				"Peggy",
				"Penelope",
				"Petra",
				"Quinty",
				"Rachel",
				"Raquel",
				"Rebecca",
				"Renata",
				"Renate",
				"Ria",
				"Rina",
				"Rose",
				"Rosemary",
				"Roberta",
				"Sabrine",
				"Sabrina",
				"Samantha",
				"Shelly",
				"Simone",
				"Sophia",
				"Sophie",
				"Sonya",
				"Stanzi",
				"Stephanie",
				"Sue",
				"Susan",
				"Susanna",
				"Sylvia",
				"Theresa",
				"Thea",
				"Tina",
				"Ursula",
				"Ulla",
				"Valentina",
				"Victoria",
				"Vicky",
				"Vicxy",
				"Wanda",
				"Walda",
				"Wilhelmina",
				"Wilma",
				"Wendy",
				"Xantippe",
				"Yara",
				"Yasmine",
				"Yolanthe",
				"Yvette",
				"Yvonne",
				"Zelda"
	};
}