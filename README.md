# kbk_prezentacja

Kod był uruchamiany na najnowszym debianie(https://cdimage.debian.org/debian-cd/current/amd64/iso-cd/debian-9.3.0-amd64-netinst.iso),
do obsługi maszyn wirtualnych używałem virtualboxa. Do postawienia servera w przykładach 3 i 4 użyłem socata:

```
socat TCP-LISTEN:11223,fork,reuseaddr EXEC:/home/user/vuln/stack3/stack3.out
```

Działające exploity są w working_exploits/, jak ktoś nie chce sobie spoilerować to niech tam nie zagląda


## stack3
To da się zrobić prościej, ale na potrzeby przykładu usunąłem ze źródeł(nie z binarki) część kodu której
nie używałem. Binarka pochodzi z https://github.com/ctfs/write-ups-2013/tree/master/pico-ctf-2013/rop-4.
Do znajdowania gadgetów użyłem https://github.com/JonathanSalwan/ROPgadget

## notstack4
Część na która nie starczyło czasu, dodałem trudniejszą wersję jak ktoś chce spróbować swoich sił. Warto 
zainstalować pwntools(biblioteka do pythona) oraz pwngdb(plugin do gdb, https://github.com/pwndbg/pwndbg)

```
pip install pwntools
```

