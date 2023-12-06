#include <iostream>
#include <string>
#include <vector>
#include <assert.h>
#include <time.h>
#include "RandomPicker.h"

using namespace std;

vector<string> englishVec;
vector<string> spanishVec;

RandomPicker rp;

int numFullReps = 1;

void add(const std::string &spanish, const std::string &english)
{
	for (auto it = spanishVec.begin(); it != spanishVec.end(); ++it)
	{
		if ((*it) == spanish)
		{
			cout << spanish << " has already been used" << endl;
			assert(0);
		}
	}

	for (auto it = englishVec.begin(); it != englishVec.end(); ++it)
	{
		if ((*it) == english)
		{
			cout << english << " has already been used" << endl;
			assert(0);
		}
	}

	spanishVec.push_back(spanish);
	englishVec.push_back(english);
}

int askSpanishToEnglish( int ind )
{
	
	cout << "what is the spanish word or phrase meaning \"" << englishVec[ind] << "\"?\n";

	string s;
	getline(cin, s);

	if (s == spanishVec[ind])
	{
		cout << "correct" << "\n";
		return 1;
	}
	else
	{
		cout << "incorrect. the correct answer is: " << spanishVec[ind] << "\n";
		return 0;
	}

}

int askEnglishToSpanish( int ind )
{
	cout << "what is the english word or phrase meaning \"" << spanishVec[ind] << "\"?\n";


	string s;
	getline(cin, s);

	if (s == englishVec[ind])
	{
		cout << "correct" << "\n";
		return 1;
	}
	else
	{
		cout << "incorrect. the correct answer is: " << englishVec[ind] << "\n";
		return 0;
	}

}

void notes()
{
	//dejar que = to leave/to let/to allow
	//dejar de = to stop

	//pieza = an instance of a whole thing, like "a piece of bread"
	//pedazo = a piece of something
	//trozo = a smaller piece of something
}

void fillOriginalSprint()
{
	add("salir", "to go out");
	add("entrar", "to enter");
	add("comer", "to eat");
	add("beber", "to drink");
	add("dormir", "to sleep");
	add("hablar", "to speak");
	add("escuchar", "to listen");
	add("mirar", "to look");
	add("pensar", "to think");
	add("querer", "to want");
	add("hacer", "to do");
	add("ir", "to go");
	add("estar", "to be (temporary)");
	add("ser", "to be (characteristic)");
	add("tener", "to have");
	add("poder", "to be able to");
	add("necesitar", "to need");
	add("saber", "to know (info)");
	add("conocer", "to know (person)");
	add("entender", "to understand");
	add("ayudar", "to help");
	add("gustar", "to like");
	add("preguntar", "to ask");
	add("responder", "to answer");
	add("empezar", "to start");
	add("terminar", "to end");
	add("llegar", "to arrive");
	add("partir", "to depart");
	add("viajar", "to travel");
	add("vivir", "to live");
	add("aprender", "to learn");
	add("ensenar", "to teach");
	add("correr", "to run");
	add("caminar", "to walk");
	add("leer", "to read");
	add("escribir", "to write");
	add("estudiar", "to study");
	add("trabajar", "to work");
	add("descansar", "to rest");
	add("jugar", "to play");
	add("imprimir", "to print");
	add("enviar", "to send");
	add("recibir", "to receive");
	add("borrar", "to erase");
	add("guardar", "to guard");
	add("cargar", "to load");
	add("buscar", "to search");
	add("comprar", "to buy");
	add("vender", "to sell");
	add("pagar", "to pay");
	add("cambiar", "to change");
	add("devolver", "to return (an item)");
	add("alimentar", "to feed");
	add("acostar", "to put to bed");
	add("amigo", "friend");
	add("familia", "family");
	add("comida", "food");
	add("agua", "water");
	add("cafe", "coffee");
	add("casa", "house");
	add("libro", "book");
	add("escuela", "school");
	add("trabajo", "work");
	add("gato", "cat");
	add("perro", "dog");
	add("hombre", "man");
	add("mujer", "woman");
	add("nino", "boy");
	add("nina", "girl");
	add("hijo", "son");
	add("hija", "daughter");
	add("padre", "father");
	add("madre", "mother");
	add("pais", "country");
	add("ciudad", "city");
	add("dia", "day");
	add("noche", "night");
	add("hora", "hour");
	add("minuto", "minute");
	add("numero", "number");
	add("hoy", "today");
	add("manana", "tomorrow");
	add("ayer", "yesterday");
	add("mes", "month");
	add("ano", "year");
	add("amor", "love");
	add("tiempo", "time");
	add("mundo", "world");
	add("persona", "person");
	add("calle", "street");
	add("mano", "hand");
	add("cabeza", "head");
	add("corazon", "heart");
	add("ojo", "eye");
	add("dinero", "money");
	add("fuego", "fire");
	add("tristeza", "sadness");
	add("alegria", "joy");
	add("cancion", "song");
	add("gente", "people");
	add("idioma", "language");
	add("camino", "path");
	add("sonrisa", "smile");
	add("viaje", "journey");
	add("sueno", "dream");
	add("aire", "air");
	add("mar", "sea");
	add("montana", "mountain");
	add("verano", "summer");
	add("invierno", "winter");
	add("cielo", "sky");
	add("sol", "sun");
	add("luna", "moon");
	add("estrella", "star");
	add("naturaleza", "nature");
	add("animal", "animal");
	add("planta", "plant");
	add("flor", "flower");
	add("fruta", "fruit");
	add("verdura", "vegetable");
	add("carne", "meat");
	add("pescado", "fish");
	add("leche", "milk");
	add("pan", "bread");
	add("azucar", "sugar");
	add("sal", "salt");
	add("aceite", "oil");
	add("vino", "wine");
	add("cerveza", "beer");
	add("te", "tea");
	add("desayuno", "breakfast");
	add("almuerzo", "lunch");
	add("cena", "dinner");
	add("postre", "dessert");
	add("plato", "plate");
	add("cuchillo", "knife");
	add("tenedor", "fork");
	add("cuchara", "spoon");
	add("vasa", "glass");
	add("servilleta", "napkin");
	add("mesa", "table");
	add("silla", "chair");
	add("puerta", "door");
	add("ventana", "window");
	add("cama", "bed");
	add("bano", "bathroom");
	add("suelo", "floor");
	add("pared", "wall");
	add("techo", "ceiling");
	add("habitacion", "room");
	add("escritorio", "desk");
	add("papel", "paper");
	add("lapiz", "pencil");
	add("boligrafo", "pen");
	add("computadora", "computer");
	add("telefono", "phone");
	add("television", "television");
	add("musica", "music");
	add("pelicula", "movie");
	add("fiesta", "party");
	add("juego", "game");
	add("deporte", "sport");
	add("futbol", "soccer");
	add("baloncesto", "basketball");
	add("natacion", "swimming");
	add("edificio", "building");
	add("puente", "bridge");
	add("autobus", "bus");
	add("barco", "boat");
	add("taxi", "taxi");
	add("calendario", "calendar");
	add("reloj", "clock");
	add("horaria", "schedule");
	add("direccion", "address");
	add("telefono movil", "mobile phone");
	add("correo electronico", "email");
	add("carta", "letter");
	add("paquete", "package");
	add("firma", "signature");
	add("contrasena", "password");
	add("teclado", "keyboard");
	add("pantalla", "screen");
	add("raton", "mouse");
	add("archivo", "file");
	add("carpeta", "folder");
	add("documento", "document");
	add("reembolso", "refund");
	add("cambio", "change (money)");
	add("banco", "bank");
	add("cajero automatico", "atm");
	add("cuenta bancaria", "bank account");
	add("tarjeta de credito", "credit card");
	//add("seguro", "insurance");
	add("emergencia", "emergency");
	add("policia", "police");
	add("bomberos", "firefighters");
	add("ambulancia", "ambulance");
	add("hospital", "hospital");
	add("medico", "doctor");
	add("enfermera", "nurse");
	add("farmacia", "pharmacy");
	add("vacuna", "vaccine");
	add("medicina", "medicine");
	add("pastilla", "pill");
	add("jarabe", "syrup");
	add("vendaje", "bandage");
	add("terapia", "therapy");
	add("consulta", "consultation");
	add("diagnostico", "diagnosis");
	add("tratamiento", "treatment");
	add("receta", "prescription");
	add("operacion", "surgery");
	add("rehabilitacion", "rehabilitation");
	add("salud", "health");
	add("bienestar", "well-being");
	add("ejercicio", "exercise");
	add("dieta", "diet");
	add("alimentacion", "nutrition");
	add("huevo", "egg");
	add("queso", "cheese");
	add("arroz", "rice");
	add("pasta", "pasta");
	add("sopa", "soup");
	add("ensalada", "salad");
	add("jugo", "juice");
	add("refresco", "soft drink");
	add("sidra", "cider");
	add("whisky", "whiskey");
	add("vodka", "vodka");
	add("ron", "rum");
	add("ginebra", "gin");
	add("coctel", "cocktail");
	add("tarjeta", "card");
	add("enero", "january");
	add("febrero", "february");
	add("marzo", "march");
	add("abril", "april");
	add("mayo", "may");
	add("junio", "june");
	add("julio", "july");
	add("agosto", "august");
	add("septiembre", "september");
	add("octubre", "october");
	add("noviembre", "november");
	add("deciembre", "december");
	add("lunes", "monday");
	add("martes", "tuesday");
	add("miercoles", "wednesday");
	add("jueves", "thursday");
	add("viernes", "friday");
	add("sabado", "saturday");
	add("domingo", "sunday");
	add("bien", "good");
	add("mal", "bad");
	add("feliz", "happy");
	add("triste", "sad");
	add("caliente", "hot");
	add("frio", "cold");
	add("pequeno", "small");
	add("grande", "big");
	add("nuevo", "new");
	add("viejo", "old");
	add("barato", "cheap");
	add("caro", "expensive");
	add("facil", "easy");
	add("dificil", "difficult");
	add("abierto", "open");
	add("cerrado", "closed");
	add("primero", "first");
	add("ultimo", "last");
	add("rojo", "red");
	add("azul", "blue");
	add("verde", "green");
	add("amarillo", "yellow");
	add("blanco", "white");
	add("negro", "black");
	add("hola", "hello");
	add("adios", "goodbye");
	//add("si", "yes");
	//add("no", "no");
	//add("ni", "nor");
	add("por favor", "please");
	add("gracias", "thank you");
	add("lo siento", "im sorry");
	add("como estas", "how are you");
	add("buenos dias", "good morning");
	add("buenas tardes", "good afternoon");
	add("buenas noches", "good night");
	add("aqui", "here");
	add("alli", "over there");
	add("dentro", "inside");
	add("fuera", "outside");
}

void fill1121()
{
	add("conducir", "to drive");
	add("dar", "to give");
	add("traer", "to bring");
	add("ver", "to see");
	add("cerrar", "to close");
	add("abrir", "to open");
	add("adquirir", "to acquire");
	add("contar", "to tell");
	//add("sonar", "to dream"); //sonar with no squiggle over n is "to make a sound", and I already know sonar with the squiggle is to dream.
	add("pedir", "to request");
	add("servir", "to serve");
	add("construir", "to build");
	add("includir", "to include");
	add("decir", "to say");
	add("venir", "to come");
	add("oler", "to smell");
	add("tierra", "land");
	add("alrededor", "around");
	add("girar", "to spin");
	add("pajaro", "bird");
	add("volar", "to fly");
	add("salon", "lounge");
	add("semana", "week");
	add("siempre", "always");
	add("nunca", "never");
	add("una vez", "once");
	add("dos veces", "twice");
	add("a veces", "sometimes");
	add("oficina", "office");
	add("todo", "all");
	add("lavar", "to wash");
	add("bailar", "to dance");
	add("curso", "course");
	add("si", "if");
	add("tenis", "tennis");
	add("museo", "museum");
	add("nadar", "to swim");
	add("comprender", "to comprehend");
	add("influir", "to influence");
	add("arbol", "tree");
	add("alto", "tall");
	add("corto", "short");
	add("fotosintesis", "photosynthesis");
	add("velocidad", "speed");
	add("luz", "light");
	add("millon", "million");
	add("habitante", "inhabitant");
	add("tienda", "store");
	add("ropa", "clothes");
	add("examen", "exam");
	add("gimnasio", "gym");
	add("joven", "young");
	add("cerca", "near");
	add("lejos", "far");
	add("vuelo", "flight");
	add("llamar", "to call");
	add("obtener", "to obtain");
	add("rueda", "wheel");
}

void fill1123()
{
	add("coche", "car");
	add("ciencia", "science");
	add("problema", "problem");
	add("manzana", "apple");
	add("senora", "lady");
	add("senor", "sir");
	add("chico", "boy (teenager)");
	add("educacion", "education");
	add("clase", "class");
	add("fecha", "date");
	add("cita", "appointment");
	add("fin de semana", "weekend");
	add("fin", "end");
	add("medio", "half");
	add("veinte", "twenty");
	add("este", "this");
	add("prestigioso", "prestigious");
	add("deber", "to must");
	add("llevar", "to carry");
	add("tomar", "to take");
	add("felicidad", "happiness");
	add("amistad", "friendship");
	add("antiguo", "ancient");
	add("templo", "temple");
	add("fresa", "strawberry");
	add("nata", "cream");
	add("cine", "cinema");
	add("mover", "to move");
	add("movimiento", "movement");
	add("dormitorio", "bedroom");
	add("guerra", "war");
	add("viento", "wind");
	add("cosa", "thing");


	add("lio", "mess");
	add("emocion", "emotion");
	add("ahora", "now");
	add("tocar", "to tap");

	add("igual", "equal");
	add("alguno", "some");
	add("cualquier", "any");
	add("to undo", "deshacer");
	add("ahora toca", "now it's time");
	add("capaz", "capable");
	add("poner", "to put");
	add("orden", "order");
	add("rabia", "rage");
	add("miedo", "fear");
	add("calma", "calm");
	add("levantar", "to get up");
	add("algo", "something");
	add("raro", "weird");
	add("confuso", "confused");
	add("aturdido", "dazed");
	add("volver", "to return");
}

//do numbers soon so you get them completely mastered

void fill1124()
{
	add("cual", "which");
	add("revuelta", "revolt");
	add("funcionar", "to function");
	add("cuando", "when");
	add("alegre", "joyful");
	add("reir", "to laugh");
	add("saltar", "to jump");
	add("compartir", "to share");
	add("los demas", "the others");
	add("contagiosa", "contagious");
	add("brillar", "to shine");
	add("brillante", "bright");
	add("parpadear", "to blink");
	add("parpado", "eyelid");
	add("escondar", "to hide");
	add("apetecer", "to crave");
	add("echar de menos", "to miss");
	add("dulce", "sweet");
	add("suave", "gentle");
	add("lluvia", "rain");
	add("enfadado", "angry");
	add("sentir", "to feel");
	add("cometido", "task");
	add("injusticia", "injustice");
	add("cometer", "to commit");
	add("descargar", "to discharge");
	add("temporada", "season");
	add("integrar", "to integrate");
}

void fill1125()
{
	add("separar", "to separate");
	add("cada", "each");
	add("colocar", "to place");
	add("arder", "to burn");
	add("feroz", "fierce");
	add("apagar", "to turn off");
	add("quemar", "to set on fire");
	add("fuerte", "strong");
	add("poco", "a little");
	add("cobarde", "coward");
	add("huir", "to flee");
	add("ladron", "thief");
	add("oscuridad", "darkness");
	add("respirar", "to breathe");
	add("profundo", "deep");
	add("paz", "peace");
	add("hoja", "leaf");
	add("tranquilo", "quiet");
	add("ligero", "lightweight");
	add("sitio", "site");
	add("diferente", "different");
	add("claro", "clear");
	add("parecer", "to appear");
	add("sobre", "about");
	add("apenas", "barely");
	add("tibio", "tepid");
	add("oruga", "caterpillar");
	add("diminuto", "tiny");
	add("hambriento", "hungry");
	add("pobre", "poor");
	add("enseguida", "right away");
	add("extremo", "extreme");
	add("atravesar", "to traverse");
	add("aun", "still");
	add("preceder", "to precede");
	add("seguir", "to follow");
	add("pera", "pear");
	add("ciruela", "plum");
	add("naranja", "orange");
	add("bizcocho", "biscuit");
	add("helado", "ice cream");
	add("pepinillo", "pickle");
	add("trozo", "piece");
	add("suizo", "swiss");
	add("salame", "salami");
	add("pastel", "cake");
	add("rodaja", "slice");
	add("paleta", "lollipop");
	add("cereza", "cherry");
	add("salchicha", "sausage");
	add("sandia", "watermelon");
	add("dolor", "pain");
	add("estomago", "stomach");
	add("tremendo", "tremendous");
	add("era", "was (imperfect tense)");
	add("hermoso", "handsome");

	add("capullo", "cocoon");
	add("encerrar", "to enclose");
	add("agujero", "hole");
	add("empujar", "to push");
	add("encontrar", "to find");
	add("convertido", "converted");
	add("bella", "beautiful");
	add("mariposa", "butterfly");

	add("reposar", "to lie down"); //resting while lying down. similar to descansar
	add("siguiente", "following");
}

void fill1129()
{
	add("oir", "to hear");
	add("morir", "to die");
	add("llover", "to rain");
	add("avion", "plane");
	add("tren", "train");
	add("nevar", "to snow");
	add("mismo", "same");
	add("actualmente", "at present");
	add("sobrino", "nephew");
	add("desarrollar", "to develop");
	add("teoria", "theory");
	add("limpiar", "to clean");
	add("leccion", "lesson");
	add("vestir", "to dress");
	add("camarero", "waiter");
	add("romper", "to break");
	add("resolver", "to solve");
	add("descubrir", "to discover");
	add("satisfacer", "to satisfy");
	add("ganar", "to win");
	add("competicion", "competition");
	add("regalo", "gift");
	add("ultimamente", "lately");
	add("hasta", "until");
	add("entonces", "then");
	add("ya", "already");
	add("aun no", "not yet");
	add("preparar", "to prepare");
	add("sonar", "to make a sound");
	add("prometer", "to promise");
	add("mejorar", "to improve");
	add("entrada", "entry");
	add("menudo", "what a");
	add("asi", "like this");
	add("revolver", "to stir");
	add("repetir", "to repeat");
	add("caer", "to fall");
}

void fill1130()
{
	add("producir", "to produce");
	add("andar", "to walk around");
	add("lavadora", "washing machine");
	add("pasado", "last (most recent)");
	add("enfermo", "sick");
	add("infancia", "childhood");
	add("durante", "during");
	add("duchar", "to shower");
	add("luego", "later");
	add("compra", "shopping");
	add("desayunar", "to eat breakfast");
	add("meter", "to insert");
	add("bolsillo", "pocket");
	add("comenzar", "to commence");
	add("acabar", "to finish");
	add("pasar", "to pass");
	add("pintar", "to paint");
	add("paisaje", "landscape");
	add("revista", "magazine");
	add("partido", "match");
	add("campeonato", "championship");
	add("anoche", "last night");
	add("paciente", "patient");
	add("festejos", "festivities");
	add("tarea", "homework"); //or an assigned task
	add("maleta", "suitcase");
	add("juntar", "to put together");
	add("junto a", "next to");
	add("novio", "boyfriend");
	add("continuacion", "next");
	add("rico", "rich");
	add("gracioso", "funny");
	add("pacificar", "to pacify");
	add("en ese entonces", "back then");
}

void opm1()
{
	//chapter 1 of one punch man
	add("temblar", "to tremble");
	add("ensordecedor", "deafening");
	add("ensordecer", "to deafen");
	add("rugir", "to roar");
	add("rugido", "roar");
	add("huge", "enorme");
	add("despues", "after");
	add("por doquier", "everywhere");
	add("terremoto", "earthquake");
	add("juguete", "toy");
	add("parar", "to stop"); //or to parry
	add("como si", "as if");
	add("como", "as"); //no accent mark. the question has an accent mark on the first o
	add("ejecucion", "execution");
	add("mueca", "grimace"); //can also be a smirk or other kind of a "face that you make" in other contexts
	add("ordinario", "ordinary");
	add("heroe", "hero");
	add("mediocre", "mediocre");
	add("presentacion", "presentation");
	add("por otro lado", "on the other hand");
	add("lado", "side");
	add("producto", "product");
	add("continuo", "continuous");
	add("contaminacion", "contamination");
	add("causar", "to cause");
	add("humano", "human");
	add("inmundo", "filthy");
	add("escoria", "scum");
	add("propio", "own"); //like my own X
	add("devorar", "to devour");
	add("civilizacion", "civilization");
	add("faz", "face");
	add("nacer", "to be born");
	add("eliminar", "to eliminate");
	add("malvado", "evil (descriptor)");
	add("furia", "fury");
	add("encarnado", "incarnate");
	add("promedio", "average");
	add("atreverse", "to dare");
	add("tipo", "type"); //can also mean guy or a disposition
	add("oponerse", "to oppose"); //or put up, like put up a fight
	add("apostol", "apostle");
	add("razon", "reason");
	add("cura", "cure");
	add("exterminar", "to exterminate");
	add("pelea", "fight");
	add("golpe", "hit"); //or punch
	add("joder", "to fuck");
	add("continuar", "to continue");
}

void opm2()
{
	//chapter 2
	add("suspiro", "sigh");
	add("por lo que", "which is why"); //also means "so"
	add("asalariado", "salary");
	add("trabajador", "worker");
	add("gran", "grand");
	add("cangrejo", "crab");
	add("sufrir", "to suffer");
	add("repentino", "sudden");
	add("metamorfosis", "metamorphosis");
	add("malhumorado", "grumpy");
	add("griton", "loudmouthed");
	add("cierto", "correct"); //or true, right, correct
	add("excepto", "except");
	add("desempleado", "unemployed");
	add("caso", "case");
	add("entrevista", "interview");
	add("rechazar", "to reject");
	add("asi de facil", "just like that");
	add("importar", "to matter");
	add("suceder", "to happen");
	add("deseo", "desire");
	add("delante", "in front");
	add("asi que", "therefore"); //or "so"
	add("que yo", "as me");
	add("suficiente", "sufficient");
	add("aprobar", "to approve"); //or to pass an exam
	add("colega", "colleague");
	add("dejar", "to leave"); //or allow. or "to let", can also mean to stop, as in like "to leave behind"
	add("ademas", "besides"); //accent on the mas
	add("presa", "prey");
	add("de todos modos", "anyway");
	add("mocoso", "kid"); //a word for a young kid
	add("menton", "chin"); //accent on ton
	add("cortar", "to cut");
	add("esperar", "to wait");
	add("pedazo", "piece (formal)"); //super similar to to trozo
	add("dibujar", "to draw");
	add("pezon", "nipple");
	add("marcador", "marker");
	add("parque", "park");
	add("tal", "such");
	add("tal vez", "maybe");
	add("seguro", "safe"); //insurance is a rare definition for this
	add("lugar", "place");
	add("posible", "possible");
	add("pronto", "soon"); //also quick
	add("verdad", "truth");
	add("lindo", "cute");
	add("asunto", "issue"); //or matter
	add("casi", "almost");
	add("olvidar", "to forget");
	add("preocupar", "to worry");
	add("balon", "ball"); //accent on o
	add("maldito", "damn");
	add("intentar", "to try");
	add("salvar", "to save");
	add("mierdecilla", "little shit");
	add("serio", "serious");
	add("matar", "to kill");

	add("puede que", "it's possible that");

	add("alguien", "someone");
	add("broma", "prank");
	add("demasiado", "too");
	add("apariencia", "appearance");
	add("exterior", "outer");
	add("maravilloso", "marvelous");
	add("cuerpo", "body");
	add("por si fuera poco", "to make matters worse"); //furthermore, moreover, and if that wasn't enough
	add("durar", "to last");
	add("duro", "hard");
	add("pinzas", "pincers"); //also tweezers, tongs, and pliers
	add("piedad", "mercy");
	add("interponer", "to interpose"); //to place between two things, or to interject in a conversation
	add("asegurar", "to assure");
	add("soler", "to use to");
	add("ahi", "there");
	add("sentar", "to sit");
	add("asesinado", "murder victim");
	add("epoca", "period"); //time period, the time of, the age of
	add("donde", "where");
	add("natalidad", "birthrate");
	add("disminuido", "disabled"); //also diminished or handicapped
	add("recordar", "to remember");
	add("villano", "villain");
	add("derrotar", "to defeat");
	add("estereotipados", "stereotypical");
	add("ven", "come");
	add("contra", "against");
	add("entrenar", "to train");
	add("perder", "to lose");
	add("cabello", "hair");
	add("punto", "point");
	add("finalmente", "finally");
	add("conseguir", "to get");
	add("convertir", "to convert");
	add("aunque", "even though");
	add("vacio", "empty");
}

void opm3()
{
	//chapter 3
	add("disfrutar", "to enjoy");
	add("esteroide", "steroid");
	add("bienvenido", "welcome");
	add("capitulo", "chapter"); //accent on the i
	add("definitivo", "definitive");
	add("rey", "king");
	add("cuidado", "care");
	add("cerebro", "brain");
	add("musculo", "muscle");
	add("colapsar", "to collapse");
	add("atorar", "to block");
	add("bajo", "under");
	add("escombros", "debris");
	add("cima", "summit");
	add("intelecto", "intelect");
	add("conquistar", "to conquer");
	add("nuestro", "our");
	add("gobernar", "to govern");
	add("destruir", "to destroy");
	add("entero", "entire");
	add("mecer", "to swing"); //to rock back and forth or swing like swinging your arm
	add("brazo", "arm");
	add("genial", "great");
	add("mil", "thousand");
	add("alarma", "alarm");
	add("evacuacion", "evacuation");
	add("desastre", "disaster");
	add("nivel", "level");
	add("demonio", "demon");
	add("reporte", "report");
	add("de acuerdo", "according to"); //if alone, can mean OK
	add("hacia", "toward");
	add("evacuar", "to evacuate");
	add("inmediatamente", "immediately");
	add("mostrar", "to show");
	add("hombro", "shoulder");
	add("pantalones", "pants");
	add("manotazo", "slap"); //a blow with the hand
	add("fuerza", "strength");
	add("culpa", "fault"); //your fault = tu culpa
	add("imperdonable", "unforgivable");
	add("perdonar", "to forgive");
	add("abrumador", "overwhelming");
	add("jodidamente", "fucking");
	add("aburrido", "boring");
	add("aniquilar", "to annihilate");
}

void opm4()
{
	////chapter 4
	add("grosero", "rude");
	add("terricola", "earthling"); //accent on the i
	add("superficie", "surface");
	add("probablamente", "probably");
	add("subterraneo", "subterranean"); //accent on a
	add("nos", "us");
	add("espacio", "space");
	add("decidir", "to decide");
	add("numeroso", "numerous");
	add("invasion", "invasion"); //accent on o
	add("poblacion", "population");
	add("rencor", "resentment");
	add("batalla", "battle");
	add("supervivencia", "survival");
	add("embargar", "to seize");
	add("definitivamente", "definitely");
	add("sorprendente", "surprising");
	add("sin embargo", "however"); //moving on in contrast to the previous thing
	add("aguantar", "to bear");
	add("proteger", "to protect");
	add("sensacion", "sensation");
	add("adrenalina", "adrenaline");
	add("presion", "pressure");
	add("tension", "tension");
	add("tanto", "so much");
	add("sentimiento", "feeling");
	add("pertenecer", "to belong to");
	add("subsuelo", "underground");
}

void opm5()
{
	//chapter 5
	add("senal", "sign"); //n has a squiggle, senyal is pronunciation
	add("maldad", "evil (concept)");
	add("antes", "before");
	add("diversion", "fun");
	add("significar", "to mean");
	add("accion", "action");
	add("efector", "effect");
	add("verdadero", "true");
	add("molestar", "to bother");
	add("minimo", "minimum");
	add("actuar", "to act");
	add("satisfaccion", "satisfaction");
	add("nombre", "name");
	add("placer", "pleasure");
	add("voluntad", "will");
	add("como sea", "whatever the case"); //moving on but indifferent
	add("debilitar", "to weaken");
	add("tras", "after (following)"); //like dia tras dia is day after day
	add("palabra", "word");
	add("insensible", "insensitive");
	add("tampoco", "neither");
	add("calvo", "bald");
	add("esencial", "essential");
	add("llenar", "to fill");
	add("panico", "panic");
	add("ira", "anger"); //wrath
	add("ileso", "unharmed");
	add("guante", "glove");
	add("enfrente", "opposite"); //or in front. facing
	add("fenomeno", "phenomenon"); //accent on first o
	add("mutante", "mutant");
	add("ingenio", "ingenuity");
	add("luchar", "to struggle"); //or fight, but not in the moment. pelear to is to be trying to hurt each other in that moment
	add("audacia", "daring"); //audacity
	add("aplastar", "to crush");
	add("insecto", "insect");
	add("justo", "just");
	add("sip", "yep");
	add("escapar", "to escape");
	add("masivo", "massive");
	add("ataque", "attack");
	add("caos", "chaos");
	add("afectado", "affected");
	add("pena", "pity");
	add("tema", "subject");
	add("especie", "species");
	add("largo", "get out of here"); //usually means long
	add("interrumpir", "to interrupt");
	add("programa", "program");
	add("noticias", "news");
	add("enjambre", "swarm");
	add("dirigir", "to direct");
	add("abstenerse", "to refrain");
	add("hogar", "home");
	add("piel", "skin");
	add("hueso", "bone");
	add("ganado", "livestock");
	add("contacto", "contact");
	add("tormentar", "to torture");
	add("arena", "sand");
	add("abandonar", "to abandon");
	add("picadura", "sting"); //or bite. like a mosquito bite is a picadura
	add("nadie", "no one");
	add("sangre", "blood");
	add("grupo", "group");
	add("ni cerca", "not near");
	add("varios", "several");
	add("algun lugar", "somewhere");
	add("cercano", "close");
	add("recolectar", "to collect");
	add("ti misma", "yourself");
	add("asumir", "to assume");
	add("controlar", "to control");
	add("explicar", "to explain");
	add("anormal", "abnormal");
	add("forma", "form"); //can mean way. like forma anormal = abnormal way
	add("lider", "leader");
	add("encargar", "to handle"); //can also mean to order as in a request, or a commission
	add("disolver", "to dissolve");
	add("seco", "dry");
	add("quedar", "to stay"); //to be left, to remain
	add("quieto", "motionless");
	add("atrapar", "to catch");
}

void fillNew()
{
	//chapter 6
	add("incenerar", "to incinerate");
	add("pierna", "leg");
	add("inutil", "useless"); //accent on the u
	add("convidar", "to invite");
	add("radio", "radius"); //can also be a literal radio
	add("kilometro", "kilometer"); //accent on the first o
	add("succionar", "to suck");
	add("bosque", "forest");
	add("inyectar", "to inject");
	add("calido", "warm"); //accent on the a
	add("fluido", "fluid");
	add("multiplicar", "to multiply");
	add("suponer", "to suppose");
	add("sino", "but");
	add("area", "area"); //accent on the first a
	add("mayor", "bigger");
	add("convocar", "to summon");
	add("bastardo", "bastard");
	add("ese", "that one"); //that, but referring to one thing
	add("nube", "cloud");
	add("retorcer", "to twist"); //or to squirm
	add("disparar", "to shoot");
	add("disparo", "shot");
	add("verificar", "to verify");
	add("metro", "meter");
	add("redonda", "surrounding area"); //radius of nearby area
	add("increible", "incredible"); //accent on the second i
	add("canon", "cannon"); //squiggle over the n. pronounced canyon
	add("insecticida", "insecticide");
	add("proposito", "purpose"); //accent on 2nd o
	add("cumplir", "to achieve");
	add("debil", "weak"); //accent on the e
	add("fragil", "fragile"); //accent on the a
	add("mientras", "while");
	add("velos", "fast");
	add("consumir", "to consume");
	add("bajar", "to descend");//to go down
	add("guardia", "guard");
	add("oportunidad", "opportunity");
	add("odiar", "to hate");
	add("permitir", "to allow"); //to permit
	add("discipulo", "disciple"); //accent on the 2nd i

	//chapter 7
	add("maestro", "master");
	add("vete", "go away");
	add("pieza", "whole piece");
	add("basicamente", "basically"); //accent on the first a
	add("reparar", "to fix");
	add("repuesto", "spare part");
	add("parte", "part");
	add("usar", "to use");
	add("armadura", "armor");
	add("a pesar de", "in spite of");
	add("pesar", "to weigh"); //or "to be a burden"
	add("tan", "so"); // as in so much
	add("incluso", "including");
	add("enloquecer", "to go crazy"); //or to drive crazy
	add("reptentinamente", "suddenly");
	add("loco", "crazy");
	add("completo", "complete");
	add("dano", "damage"); //n has a squiggle, pronounced danyo
	add("trasplante", "transplant");
	add("sobrevivir", "to survive");
	add("milagrosamente", "miraculously");
	add("muchacho", "young man");
	add("perseguir", "to pursue");
	add("detener", "to detain"); //to delay, to arrest
	add("suplicar", "to beg");
	add("renacer", "to be reborn");
	add("incontables", "innumerable");
	add("organizacion", "organization");
	add("pista", "clue"); //or "tracks", like animal tracks
	add("paradero", "whereabouts");
	add("evitar", "to avoid");
	add("irritado", "irritated");
	add("resultado", "result");
	add("convencer", "to convince");
	add("existir", "to exist");
	add("posibilidad", "possibility");
	add("frontal", "front");
	add("realizar", "to carry out");
	add("analisis", "analysis");
	add("peso", "weight");
	add("duplicar", "to duplicate");
	add("lo que sea", "whatever");
	add("resumir", "to summarize");
	add("oracion", "sentence");
	add("maximo", "maximium"); //accent on the a
	add("ala", "wing");
	add("prototipo", "prototype");
	add("camara", "camera"); //accent on the first a
	add("rastrear", "to track");
	add("grabar", "to record");
	add("desnudar", "to undress");
	add("desnudo", "naked");
	add("ejemplar", "sample"); //specimen, exemplary
	add("mensajero", "messenger");
	add("invitacion", "invitation");
	add("inmediato", "immediate");
	add("version", "version");
	add("superar", "to overcome"); //to surpass
	add("listo", "ready"); //or smart
	add("enfrentar", "to confront");
	add("acercar", "to approach"); //to move closer
	add("telepatia", "telepathy"); //accent on the final i
	add("miembro", "member");
	add("olvidelo", "forget about it");
	add("tambalearse", "to stagger"); //or to wobble
	add("hundirse", "to sink");
	add("extrano", "strange");//squiggle on n, pronounced extranyo
	add("crecer", "to grow");
	add("a traves de", "through"); //accent on the e in traves
	add("energia", "energy"); //accent on the i
	add("detectar", "to detect");
}


void fill()
{
	/*fillOriginalSprint();
	fill1121();
	fill1123();
	fill1124();
	fill1125();
	fill1129();
	fill1130();

	opm1();
	opm2();
	opm3();
	opm4();*/

	fillNew();
}

void addAllActiveOptions()
{
	rp.Reset();
	int numWords = englishVec.size();
	for (int i = 0; i < numWords * 2; ++i)
	{
		rp.AddActiveOption(i, numFullReps);
	}
}

int main()
{
	srand(time(0));
	fill();
	
	vector<int> failedIndexes;
	int numWords = englishVec.size();
	rp.ReserveNumOptions(numWords * 2);

	numFullReps = 1;

	addAllActiveOptions();

	int r;
	int index = 0;
	int res = 0;
	int score = 0;

	int numFailedReps = 1;

	cout << "Quiz Begin" << endl;
	cout << "you are being tested on: " << englishVec.size() << " phrases or words!" << endl;
	cout << "--------------" << endl;
	cout << "--------------" << endl;
	cout << "--------------" << endl;
	cout << "--------------" << endl;

	while (true)
	{
		failedIndexes.clear();
		rp.ShuffleActiveOptions();
		score = 0;
		while (true)
		{
			index = rp.TryGetNextOption();

			if (index == -1)
			{
				cout << "quiz complete!\n\n" << endl;
				break;
			}

			if (index >= numWords)
			{
				res = askSpanishToEnglish(index - numWords);
				if (res == 0)
				{
					failedIndexes.push_back(index);
				}
				score += res;
			}
			else
			{
				res = askEnglishToSpanish(index);
				if (res == 0)
				{
					failedIndexes.push_back(index);
				}
				score += res;
			}
		}

		if (failedIndexes.size() == 0)
		{
			cout << "Congrats! You got a perfect score!!" << endl;

			cin.get();

			cout << "Quiz Begin" << endl;
			cout << "--------------" << endl;
			cout << "--------------" << endl;
			cout << "--------------" << endl;
			cout << "--------------" << endl;

			addAllActiveOptions();
		}
		else
		{
			cout << "Almost there! Here are the ones you missed:" << endl;

			rp.Reset();
			for (int i = 0; i < failedIndexes.size(); ++i)
			{
				rp.AddActiveOption(failedIndexes[i], numFailedReps);
			}
		}


	}
}