import subprocess
from googletrans import Translator

def main():
    translator = Translator()

    output: bytes = subprocess.check_output('fortune')
    output_str: str = output.decode()

    trans_jp = translator.translate(output_str)

    print(trans_jp.text)

if __name__ == '__main__':
    main()
