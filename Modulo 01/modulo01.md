# Modulo 1

## Comunicação

### Problema Fundamental da Comunicação
- Reproduzir em um ponto exatamente ou aproximadamente uma mensagem selecionada em outro ponto.
- Em geral, espera-se que mensagem possuam um significado. Porém, os aspectos semânticos da comunicação não serão estudados neste curso.

### Premissas 
- Uma mensaguem é selecionada a partir de um conjunto de mensagens possíveis.
- Sistema de comunicações deve ser projetado para operar independentemente da mensagem escolhida. 

![Comunicação](./img/image01.png)

### Informação
- Na comunicação, uma mensagem é selecionada de um conjunto de mensagens possíveis.
- O processo escolha de uma mensagem é dentre as possíveis vinculada "informação". à escolha. Mas, como medir a quantidade de informação?
  - Se o conjunto de mensagens possíveis é pequeno, o processo de tentativa e erro para adivinhar a mensagem escolhida é mais simples. Pouca informação.
  - A vida real é um conjunto mais refinada: a escolha de algumas mensagens são mais prováveis que outras. Não seria conveniente derivar a informação de uma média? 

### Definição Matemática de Informação
- Se o número de elementos do conjunto é finito, esse n~umero ou qualquer função monotônica desse número pode ser considerada como uma média de informação quando da escolha de uma mensagem do conjunto. 

## internet

### História
- A internet foi criada em 1969, com o nome de ARPANET, com o objetivo de interligar computadores de universidades e centros de pesquisa dos EUA.
- A internet é uma rede de redes, que interliga computadores em todo o mundo.

### O que é a Internet?
Internet é uma rede de computadores que conecta centenas de milhôes de dispositivos computacionais através do mundo: 
- Computadores pessoais
- Servidores
- Laptops
- Smartphones
- Tablets
- Smart TVs
- Consoles de videogame
- Dispositivos de IoT
- Etc.

![Internet](./img/image02.png)


## Rede

### O que é Rede?
Rede é um conjunto de **enlaces de comunicações (links)** e **comutadores de pacotes (packets switches)**

> O enlace (link) é o componente de rede físico e lógico usado para interconectar computadores (hosts ou nós ) na rede e um protocolo de enlace é um conjunto de métodos e padrões que operam apenas entre nós de rede adjacentes de um segmento de rede.

- Meios físicos: cabos coaxiais, fios de cobre, fibra óptica, ondas de rádio e espectro eletromagnético.
- Provêem diferentes capacidades: bits/segundos.

### Tratamento de pacote: rede comutada a pacotes

> Comutação de pacotes é um paradigma de comunicação de dados em que pacotes (unidade de transferência de informação) são individualmente encaminhados entre os nós da rede através de ligações de dados tipicamente partilhadas por outros nós.

- Emissor segmenta os dados e adiciona cabeçalho a cada segmento.
- Pacotes formatados dessa forma são encaminhados pela rede ao destino.
- Destino reagrupa os segmentos para remontar o dado originalmente enviado.

## Comutadores
Os comutadores são elementos que permitem a interligação de diferentes enlaces. Eles coletam um pacote que chega através de um de seus enlaces e encaminha para o enlce de destino. 

Tipos de comutadores:
- roteadores: compõe o núcleo da rede;
- switches: provêem redes de acesso;

Denomina-se o caminho percorrido por um pacote por **rota** ou **caminho**.

## ISP: Internet Service Provider
O Provedor de Serviço de Internet (ISP) provê acesso de end systems à rede interconectada.

- Tipos: residencial, corporativo, móvel,ISP/HotSpot, etc.
- Cada ISP é, por sua vez, uma ree de comutação de pacotes e enlaces de comunicações.
- ISP provê acesso a provedores de conteúdo, conectando esses sites à internet.

### Protocolo de rede
- Entidades(hardware ou software) trocam mensagens e realizam ações (reagem!) decorrentes das mensagens trocadas.
- Todas as atividades da internet que envolvem duas ou mais entidades comunicantes são governadas por protocolos.
- Há padrões de sinalização de bits, controle de congestionamento, gerenciamento de rotas, etc.

### Protocolo TCP/IP
- O protocolo TCP/IP é o protocolo de comunicação padrão da internet. 
- O IP especifica o formato em que os pacotes são enviados e recebidos entre roteadores e end systems.

![Internet](./img/image03.png)

### DSL: Digital Subscriber Line
- DSL é uma tecnologia de comunicação que fornece uma conexão de dados digital sobre o fio de cobre do telefone local.
- Operadora de telefonia provê serviço no mesmo meio usado para prover chamadas de voz (telefone).
- A operadora afrefa o papel de ISP.
- O modem (MODulador/DEModulador) do cliente usa a linha telefônica para fechar enlace de dados com o Digital Subscriber Line Acess Multiplexer (DSLAM) da operadora.
- Modem converte dados digitais em sinais analógicos.
- DSLAM converte sinais analógicos em digitais e encaminha para a internet.

![DSL](./img/image04.png)

- Uso do par trançado de cobre para estabelecimento de enlace.
  - high-speed downstream: 50 kHz a 1 MHz
  - medium-speed upstream: 4 kHz a 50 kHz
  - canal telefônico: 0 a 4 kHz
  - Filtro de linha!
- Padrões de taxas de transmissão:
  - ITU 1999: 12 Mbps downstream, 1.8 Mbps upstream
  - ITU 2003: 24 Mbps downstream, 2.5 Mbps upstream
- ASDL: Asymmtric
- Aproveitamento da infraestrutura lógica de operadoras de TV a cabo
- Em geral, operadora de TV a cabo oferece serviço de internet.
- Sistema híbrido (HFC) Fibra  Coaxial são usados na rede de acesso.

![DSL](./img/image05.png)

### FTTH: Fiber to the Home
- Direct Fiber: uma fibra por domicílio.
- Fibra compatilhada: mais comum.
- Arquiteturas: 
  - Active Optical Network (AON): Ethernet sobre fibra ótica;
  - Passive Optical Network (PON): Provida pela Verizon: FIOS (20 Mbps)

### WLAN: Wireless Local Area Network
- Dispositivos transmitem e recebem por rádio pacotes de pontos de acesso que, por sua vez, estão conectados à rede Internet.
- Poucas dezenas de metros do ponto de acesso.
- Padrões IEEE 802.11: WiFi, velocidades até 300 Mbps.

### Meio Físico
- Par traçado, cabo coaxial, fibra óptica, ondas de rádio, espectro eletromagnético.
- Meio guiado: ondas são confinadas em meio sólido. Fibra optica, par traçado, cabo coaxial.
- Meio não-guiado: atmosfera, espaço sideral.

#### Par Trançado - UTP (Unshielded Twisted Pair)
- Meio mais barato e comum, fuiado. 
- Um par de cabos isolados ajustados de acordo com um padrão aspiral.
- Por que aspiral? Reduz interferência eletromagnética de pares similares e colocalizados.
- Em geral, pares trançados são encontrados em cabos, envoltos com uma camada protetora.

#### Cabo Coaxial
- Dois condutores de cobre: malha e alma, concêntricos.
- Construção permite isolamento espacial e altas taxas de transmissão. 
- Muito comum para difusão de serviõs de TV a cabo: aproveitamento de infraestruturas.
- Meio compartilhado. Deslocamento de frequência para aproveitamento do meio.

![Cabo Coaxial](./img/image06.png)

#### Fibra Óptica
- MEio fino, flexível, capaz de conduzir pulsos de luz que transportam bits.
- Uma fibra optica é capaz de prover altíssimas taxas, dezenas e centenas de Gbps.
- Muito conveniente para enlaces transoceânicos.
- Backbone (espina dorsal) da internet moderna.
- Vantagens:
  - Imunidade a interferências eletromagnéticas;
  - Atenuação muito baixa em longas distâncias (100 km);
  - "Difíceis" de serem "grampeadas";

![Fibra Óptica](./img/image07.png)

#### Ondas de Rádio
- Canais de rádio carregam sinais no espectro eletromanético.
- Vantagens:
  - Não é guiado: nãp requer lançamento de fios.
  - é permeável a obstáculos: atravessa paredes.
  - pode permitir mobilidade de seus usuários.
  - cobertura a distâncias consideráveis.
- Desvantagens:
  - problemas de propagação: perda de sinal no enlace, sombras, interferências por múltiplos percursos, interferências de outros sistemas.
- Classificação:
  - Curto elcance (1 ou 2 m): bluetooth, NFC, RFID;
  - Médio alcance (10 m a 1 km): WiFi.
  - Longo alcance ( > 1 km): celular.
  
  #### Canais por satélite
  - Conectam duas ou mais estações base que se comunicam com o satélite através de enlaces de microondas.

  ![Canais Satélites](./img/image08.png)

  ##### Geoestacionários (GEOS)
  - Ficam parados sobre a mesma região do planeta, girando com a mesma velocidade angular da Terra.
  - Orbitam a 36.000 km de altitude.
  - Atrasos de propagação de 280 ms.
  - Tavas de transmissão compatíveis com de enlaces DSL (Mbps).

  ##### Medium Earth Orbit Satellites (MEOS) - Satélites de Órbita Média
    - Orbitam a 20.000 km de altitude.
    - Atrasos de propagação de 140 ms.
    - Ficam em movimento em relação à Terra.

  ##### Low Earth Orbit Satellites (LEOS) - Satélites de Órbita Baixa
  - Orbitam mais próximo do planeta e não ficam, permanentemente, sobre a mesma região.
  - Podem se cmunicar com outros satélites: rede de satélites.

  ![LEOS](./img/image09.png)

### Núcleo da Rede

![Núcleo da Rede](./img/image10.png)

#### Comutação de Pacotes
- Hosts trocam mensagens entre si.
  - o conteúdo da mensagem é discricionário: pode ser mensagens de controle ou de dados.
  - É muito comum a necessidade de se quebrar uma mensagem longa em pedaços menores de dados chamados pacotes.
  - Entre a fonte e o destino, cada pacote viaja através de enlaces de comunicações e comutadores de pacotes (roteadores e switches de camada de enlace).
  - Pacotes são transmitidos através de cada enlace de comunicação a uma taxa igual à taxa máxima de transmissão do enlace.
  
#### Política Armazena e Encaminha
