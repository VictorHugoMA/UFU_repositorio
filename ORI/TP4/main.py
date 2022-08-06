import ModeloVetorial

listaDoc = [ 'd1.txt', 'd2.txt', 'd3.txt', 'd4.txt']

listaDoc2 = [ 'hinoAmericaMG.txt', 'hinoAthletico.txt', 'hinoAtleticoGO.txt', 'hinoAtleticoMG.txt', 'hinoAvai.txt',
            'hinoBotafogo.txt', 'hinoBragantino.txt', 'hinoCeara.txt', 'hinoCorinthians.txt', 'hinoCoritiba.txt',
            'hinoCuiaba.txt', 'hinoFlamengo.txt', 'hinoFluminense.txt', 'hinoFortaleza.txt', 'hinoGoias.txt',
            'hinoInternacional.txt', 'hinoJuventude.txt','hinoPalmeiras.txt', 'hinoSantos.txt', 'hinoSaoPaulo.txt'] 

mv = ModeloVetorial.ModeloVetorial(listaDoc2)

mv.inputCalculaConsulta()

