## Relembrando as camadas de Rede
O **Modelo OSI (Open Systems Interconnection)** é um modelo teórico que descreve como os dados trafegam de um dispositivo para outro em uma rede. Ele divide as funções de comunicação em **sete camadas**, cada uma com um **papel específico**. A abordagem **top-down** significa começar da camada mais próxima do usuário (Aplicação) até a camada mais fundamental (Física).

### **1. Camada de Aplicação (Application Layer)**
🔹 **Função**: Fornece interface direta com o usuário e permite que aplicativos utilizem serviços de rede.  
🔹 **Responsabilidade**:
   - Permitir que softwares se comuniquem através da rede.
   - Interpretar dados recebidos e enviados.
   - Protocolos comuns:
     - **HTTP/HTTPS** (Navegação na Web)
     - **FTP** (Transferência de Arquivos)
     - **SMTP/IMAP/POP3** (E-mails)
     - **DNS** (Resolução de nomes)

📌 **Exemplo**: Quando você acessa um site no navegador, a camada de aplicação usa **HTTP** para recuperar a página.

### **2. Camada de Apresentação (Presentation Layer)**
🔹 **Função**: Garante que os dados transmitidos sejam compreensíveis para o receptor.  
🔹 **Responsabilidade**:
   - **Criptografia e compressão** de dados (exemplo: TLS/SSL).
   - Conversão entre diferentes formatos de dados (Ex.: ASCII, JPEG, MP3).
   - Codificação e decodificação de informações.

📌 **Exemplo**: Quando um site usa **HTTPS**, a criptografia ocorre nessa camada.

### **3. Camada de Sessão (Session Layer)**
🔹 **Função**: Controla **início, manutenção e encerramento** de sessões entre dois dispositivos.  
🔹 **Responsabilidade**:
   - Gerenciar sessões ativas entre clientes e servidores.
   - Controlar **tempo de inatividade** e reconexões automáticas.
   - Sincronizar transmissões de dados.

📌 **Exemplo**: Em uma videoconferência, essa camada mantém a conexão ativa, garantindo que a transmissão de áudio e vídeo continue funcionando.

### **4. Camada de Transporte (Transport Layer)**
🔹 **Função**: Garante a **entrega confiável** de dados entre os dispositivos.  
🔹 **Responsabilidade**:
   - **Segmentação e reassemblagem** de dados.
   - Controle de **fluxo** e **confiabilidade**.
   - Protocolos principais:
     - **TCP (Transmission Control Protocol)** → Confiável (garante a entrega e ordem dos pacotes).
     - **UDP (User Datagram Protocol)** → Não confiável, porém mais rápido.

📌 **Exemplo**:  
- **TCP** é usado em downloads e páginas da web, pois precisa garantir que os dados cheguem na ordem correta.  
- **UDP** é usado em chamadas VoIP e streaming de vídeos, pois a velocidade é mais importante que a confiabilidade.

### **5. Camada de Rede (Network Layer)**
🔹 **Função**: Responsável pelo **endereçamento** e **roteamento** de pacotes entre redes diferentes.  
🔹 **Responsabilidade**:
   - Define **endereços IP** para os dispositivos.
   - Determina a **melhor rota** para entregar os pacotes.
   - Encaminha pacotes entre diferentes redes.
   - Protocolos importantes:
     - **IP (Internet Protocol)** → IPv4 / IPv6.
     - **ICMP (Internet Control Message Protocol)** → Diagnóstico de rede (exemplo: "ping").
     - **OSPF, BGP** → Protocolos de roteamento.

📌 **Exemplo**: Quando você acessa um site, essa camada define qual **caminho** o pacote de dados seguirá até o servidor.

### **6. Camada de Enlace de Dados (Data Link Layer)**
🔹 **Função**: Controla a comunicação dentro da mesma **rede local (LAN)** e garante a **detecção de erros**.  
🔹 **Responsabilidade**:
   - Converte pacotes da Camada de Rede em **quadros (frames)**.
   - Controla o **acesso ao meio** de transmissão (Wi-Fi, Ethernet, etc.).
   - Usa **endereços MAC** para comunicação entre dispositivos.
   - Protocolos:
     - **Ethernet (IEEE 802.3)**
     - **Wi-Fi (IEEE 802.11)**
     - **ARP (Address Resolution Protocol)** → Tradução IP ↔ MAC.

📌 **Exemplo**: Quando seu computador envia um pacote para um roteador via **Wi-Fi ou cabo Ethernet**, a camada de enlace garante que o quadro chegue corretamente.

### **7. Camada Física (Physical Layer)**
🔹 **Função**: Trata da **transmissão física dos bits** pelo meio físico (cabos, rádio, fibra óptica, etc.).  
🔹 **Responsabilidade**:
   - Converter dados em sinais elétricos, ópticos ou de rádio.
   - Definir características como frequência, voltagem, velocidade da transmissão.
   - Exemplo de tecnologias:
     - **Cabos Ethernet (UTP, fibra óptica)**
     - **Wi-Fi**
     - **Bluetooth**
     - **Ondas de rádio (5G, LTE, etc.)**

📌 **Exemplo**: Quando você conecta um cabo de rede no seu computador, essa camada garante que os bits sejam enviados corretamente.

## **Terminologia Importante**
- **Protocolo**: Conjunto de regras que define como os dispositivos se comunicam (ex.: TCP/IP, HTTP, DNS).
- **Encapsulamento**: Processo de adicionar cabeçalhos e trailers aos dados enquanto descem pelas camadas.
- **PDU (Protocol Data Unit)**: Nome dos dados em cada camada:
  - **Aplicação** → **Dados**
  - **Transporte** → **Segmento (TCP) ou Datagrama (UDP)**
  - **Rede** → **Pacote**
  - **Enlace de Dados** → **Quadro (Frame)**
  - **Física** → **Bits**
- **Endereços**:
  - **MAC Address** → Usado na **Camada de Enlace** (único por dispositivo).
  - **IP Address** → Usado na **Camada de Rede** (define a localização na rede).
  - **Portas** → Usadas na **Camada de Transporte** (exemplo: HTTP usa porta 80, HTTPS usa porta 443).

## **Resumo Visual**
| Camada | Função Principal | Exemplos |
|---|---|---|
| **7. Aplicação** | Interação com usuário | HTTP, FTP, SMTP, DNS |
| **6. Apresentação** | Formatação e criptografia | SSL/TLS, JPEG, MP3 |
| **5. Sessão** | Controle de sessões | RTP, NetBIOS |
| **4. Transporte** | Entrega confiável de dados | TCP, UDP |
| **3. Rede** | Roteamento e endereçamento | IP, ICMP, OSPF |
| **2. Enlace de Dados** | Comunicação dentro da LAN | Ethernet, Wi-Fi, MAC Address |
| **1. Física** | Transmissão de bits | Cabos, Wi-Fi, Bluetooth |

# Módulo 06

## Camada de Enlace
### **Definição e Papel da Camada de Enlace**  

A **Camada de Enlace** (ou **Link Layer**) é a **segunda camada** do **Modelo OSI** e a **primeira camada** do **modelo TCP/IP**. Ela é responsável pela **transmissão de quadros (frames)** entre dispositivos conectados a um mesmo meio físico de comunicação, como um cabo Ethernet ou uma rede sem fio (Wi-Fi).  

Essa camada garante que os dados sejam enviados corretamente entre dois dispositivos diretamente conectados dentro da **mesma rede local (LAN – Local Area Network)**.  

🔹 **Principais funções da camada de enlace:**  
✔ **Encapsulamento e transferência de dados:** Os dados da camada de rede (pacotes IP) são encapsulados em quadros (**frames**) para serem transmitidos.  
✔ **Endereçamento MAC:** Cada dispositivo em uma rede possui um **endereço MAC** exclusivo (Media Access Control) usado para identificar o destinatário do quadro.  
✔ **Controle de erros:** Verifica e corrige erros durante a transmissão de dados.  
✔ **Acesso ao meio:** Determina **como os dispositivos compartilham o meio físico**, usando protocolos como **CSMA/CD (Ethernet) ou CSMA/CA (Wi-Fi)**.  


### **Serviços Fornecidos pela Camada de Enlace**  

A camada de enlace fornece vários serviços essenciais para garantir a comunicação eficiente entre dispositivos em uma mesma rede.  

#### **1️⃣ Framing (Encapsulamento de Dados em Quadros)**  
Os pacotes da **camada de rede (IP)** são encapsulados em **quadros (frames)** antes da transmissão. Um quadro contém:  
✅ **Cabeçalho** com informações de controle (endereço MAC de origem e destino).  
✅ **Dados** contendo o pacote da camada de rede.  
✅ **Trailer** com um código de verificação de erros (CRC).  

#### **2️⃣ Acesso ao Meio (Media Access Control – MAC)**  
Quando vários dispositivos compartilham o mesmo meio de comunicação, a camada de enlace controla **quem pode transmitir dados e quando**.  
**Duas abordagens principais:**  

1. **Acesso Contínuo (Contencioso)** → Dispositivos competem pelo meio.  
   - **CSMA/CD (Carrier Sense Multiple Access with Collision Detection)**: Usado no **Ethernet com fio**.  
   - **CSMA/CA (Carrier Sense Multiple Access with Collision Avoidance)**: Usado no **Wi-Fi (IEEE 802.11)** para evitar colisões.  

2. **Acesso Controlado** → Um dispositivo gerencia a transmissão.  
   - **Token Ring**: Um "token" circula entre os dispositivos, permitindo que apenas um transmita por vez.  
   - **Polling**: Um dispositivo mestre pergunta aos outros se desejam enviar dados.  

📌 **Exemplo:** No Wi-Fi, um dispositivo precisa **esperar** antes de transmitir para evitar colisões (CSMA/CA).  

---

### **3️⃣ Detecção e Correção de Erros**  
A camada de enlace adiciona **códigos de verificação** para detectar e, em alguns casos, corrigir erros na transmissão.  

✔ **Checksum e CRC (Cyclic Redundancy Check)**: Utilizados para detectar erros de transmissão.  
✔ **Código de Hamming**: Permite detectar e corrigir **erros de um único bit**.  

📌 **Exemplo:** Se um quadro chega com erro, um protocolo como **ARQ (Automatic Repeat reQuest)** pode solicitar a retransmissão.  

---

## **Terminologia Essencial**  

### **1️⃣ Nós (Hosts e Roteadores)**  
🔹 **Nós (Nodes)** são qualquer dispositivo que participa da rede, incluindo:  
✔ **Hosts (dispositivos finais)** → Computadores, celulares, impressoras.  
✔ **Roteadores** → Encaminham pacotes entre redes diferentes.  
✔ **Switches e Access Points** → Dispositivos de rede intermediários.  

📌 **Exemplo:** Seu **roteador Wi-Fi** atua como um nó, transmitindo dados entre seu computador e a Internet.  

---

### **2️⃣ Links de Comunicação (Canais Físicos e Lógicos)**  
Um **link** é um **meio de comunicação** que conecta dois nós e permite a transmissão de dados.  

✔ **Links Guiados (Físicos):**  
- **Cabo Ethernet (UTP/STP)** → Redes com fio.  
- **Fibra óptica** → Comunicação de alta velocidade.  

✔ **Links Não Guiados (Sem Fio):**  
- **Wi-Fi (802.11)** → Redes locais sem fio.  
- **Bluetooth** → Comunicação de curto alcance.  
- **Ondas de rádio e satélite** → Comunicação a longas distâncias.  

📌 **Exemplo:** Quando você conecta um cabo Ethernet, ele cria um **link físico** com o switch.  

---

### **3️⃣ Pacote da Camada 2: Frame**  
Na camada de enlace, os pacotes são chamados de **quadros (frames)**.  

🔹 Um **quadro** contém:  
✔ **Endereço MAC de origem e destino.**  
✔ **Tipo de protocolo (IPv4, IPv6).**  
✔ **Dados encapsulados da camada de rede.**  
✔ **Checksum (CRC) para detecção de erros.**  

📌 **Exemplo:**  
Um quadro Ethernet pode ser representado assim:  

```
[ MAC Destino | MAC Origem | Tipo | Dados | CRC ]
```

Se o quadro for destinado a outro roteador, ele será **reencaminhado** com um **novo MAC de destino**, enquanto o endereço IP do pacote permanece o mesmo.  

# **📌 Perguntas e Respostas sobre a Camada de Enlace (Baseado no livro de Kurose)**

### **📌 Perguntas Conceituais**
1️⃣ **O que a camada de enlace faz?**  
✔ Controla a transmissão de dados entre dispositivos conectados a um **mesmo meio físico** (LAN).  

2️⃣ **O que é um frame?**  
✔ É a unidade de dados na camada de enlace. Ele encapsula um **pacote da camada de rede** e inclui **endereços MAC e um CRC**.  

3️⃣ **Qual a diferença entre endereços MAC e IP?**  
✔ **MAC** → Identifica dispositivos dentro da **mesma rede local**.  
✔ **IP** → Identifica dispositivos entre **redes diferentes** (Internet).  

4️⃣ **O que é um nó em redes?**  
✔ Qualquer **dispositivo que envia ou recebe dados** em uma rede (ex.: computadores, roteadores).  

5️⃣ **Quais são os principais métodos de controle de acesso ao meio?**  
✔ **CSMA/CD** → Detecta colisões (Ethernet).  
✔ **CSMA/CA** → Evita colisões (Wi-Fi).  

---

### **📌 Perguntas de Aplicação**
6️⃣ **Por que precisamos de detecção de erros na camada de enlace?**  
✔ Para garantir que os dados sejam recebidos **corretamente** e sem corrupção.  

7️⃣ **O que acontece se dois dispositivos tentarem transmitir dados ao mesmo tempo em uma rede Ethernet?**  
✔ Ocorre uma **colisão**, e ambos os dispositivos precisam **esperar um tempo aleatório** antes de tentar novamente.  

8️⃣ **O Wi-Fi usa CSMA/CD ou CSMA/CA? Por quê?**  
✔ **CSMA/CA**, porque colisões são difíceis de detectar em redes sem fio.  

9️⃣ **O que acontece se um quadro Ethernet chega corrompido a um switch?**  
✔ O quadro é **descartado** devido ao erro detectado no CRC.  

🔟 **Um endereço MAC pode ser alterado?**  
✔ Sim, pode ser alterado por software, mas o valor físico é gravado na placa de rede.  


## **Conclusão**
A **Camada de Enlace** é essencial para garantir que os dados sejam transmitidos **corretamente e sem erros** dentro de uma rede local. Ela usa **endereços MAC**, **quadros (frames)** e protocolos como **Ethernet e Wi-Fi** para organizar a comunicação entre dispositivos conectados.  

Se precisar de mais explicações ou quiser aprofundar algum conceito, só avisar! 😊🚀

### **2. Detecção e Correção de Erros**
- Métodos para identificar e corrigir erros em transmissões:
  - **Bit de paridade**
  - **Soma de verificação da Internet (Internet Checksum)**
  - **Código de Redundância Cíclica (CRC)**
- Eficiência e confiabilidade desses métodos

### **3. Protocolos de Acesso Múltiplo**
- Diferentes tipos de **links**:
  - **Ponto a ponto**
  - **Broadcast (compartilhado)**
- **Protocolos de acesso múltiplo**:
  - **ALOHA (Slotted e Pure)**
  - **CSMA (Carrier Sense Multiple Access)**
  - **CSMA/CD (Collision Detection)**
  - **CSMA/CA (Collision Avoidance)**
- **Eficiência e problemas das abordagens**

### **4. Redes Locais (LANs)**
- **Endereçamento na camada de enlace**
  - Endereços **MAC** (48 bits, hexadecimal)
  - **ARP (Address Resolution Protocol)** para mapear IP → MAC
- **Ethernet**:
  - Estrutura do **frame Ethernet**
  - **CSMA/CD na Ethernet**
  - **Tipos de Ethernet** (10Mbps → 10Gbps)
- **Switches**:
  - Como funcionam (aprendizado e tabela de encaminhamento)
  - **Switches vs. Roteadores**
  - **Domínios de colisão e broadcast**
- **VLANs (Virtual Local Area Networks)**:
  - **Motivação para VLANs**
  - VLANs **baseadas em porta**
  - **Encapsulamento VLAN 802.1Q**
  - VLANs entre **múltiplos switches**

### **5. Virtualização de Enlace**
- **MPLS (Multiprotocol Label Switching)**
  - Propósito e funcionamento
  - Roteamento baseado em **rótulos (labels)**
  - Vantagens em relação ao roteamento IP
  - Exemplo de tabela de encaminhamento MPLS

### **6. Redes de Data Centers**
- Estrutura típica de um **data center**
- **Balanceadores de carga**
- Arquitetura de rede de **camadas múltiplas**
- **Redundância e escalabilidade**

### **7. Um dia na vida de uma requisição web**
- Exemplo completo de **fluxo de pacotes** na Internet:
  - **Obtenção de IP via DHCP**
  - **Resolução de nomes via DNS**
  - **Encaminhamento de pacotes**
  - **Conexão TCP**
  - **Transmissão de dados via HTTP**
- **Encapsulamento dos pacotes** ao longo das camadas

### **8. Conclusão**
- Revisão dos conceitos principais
- Importância da camada de enlace na comunicação entre dispositivos

## Redes Multimídia

### **1. Aplicações de Redes Multimídia**
- **Streaming de áudio e vídeo armazenado**
- **Voz sobre IP (VoIP)**
- **Streaming de vídeo ao vivo**
- **Características das aplicações multimídia**
- **Requisitos de rede para diferentes tipos de aplicações multimídia**

### **2. Streaming de Vídeo Armazenado**
- **Conceitos básicos de streaming**
- **Reprodução contínua (buffering)**
- **Desafios do streaming**
  - Variação no atraso da rede (**jitter**)
  - Interatividade do cliente (pausar, retroceder, avançar)
  - Perda de pacotes
- **Estratégias de transmissão:**
  - Transmissão via **UDP**
  - Transmissão via **HTTP/TCP**
  - **DASH (Dynamic Adaptive Streaming over HTTP)**
    - Cliente solicita pedaços do vídeo de acordo com a largura de banda disponível
    - Permite ajuste dinâmico da qualidade do vídeo

### **3. Redes de Distribuição de Conteúdo (CDN)**
- **Problema da escalabilidade na entrega de conteúdo multimídia**
- **Opções de arquitetura para entrega de conteúdo:**
  - **Mega-servidor único** (não escalável)
  - **CDNs (Content Delivery Networks)** com múltiplos servidores distribuídos
- **Técnicas de entrega em CDN:**
  - **"Enter Deep"** (servidores próximos aos usuários)
  - **"Bring Home"** (clusters em pontos centrais da rede)
- **Exemplo de CDN em ação (Netflix, Akamai, Limelight)**

### **4. Voz sobre IP (VoIP)**
- **Requisitos de atraso em chamadas VoIP**
  - Menos de 150ms: bom
  - Acima de 400ms: ruim
- **Codificação de áudio digital**
  - PCM, GSM, LPC, G.711, G.729
- **Problemas na transmissão de pacotes em VoIP**
  - **Perda de pacotes** (congestionamento na rede)
  - **Atraso e variação do atraso (jitter)**
- **Soluções para mitigar problemas:**
  - **Buffering e jitter control**
  - **Playout adaptativo**
  - **Recuperação de pacotes perdidos** (FEC, interleaving)

### **5. Protocolos para Aplicações Conversacionais em Tempo Real**
- **Protocolo RTP (Real-time Transport Protocol)**
  - Estrutura do cabeçalho RTP
  - Numeração de sequência e timestamps para manter sincronia
- **Protocolo RTCP (Real-time Control Protocol)**
  - Envio periódico de relatórios para monitoramento da qualidade do fluxo multimídia
  - Sincronização de múltiplos fluxos (áudio e vídeo)
- **Protocolo SIP (Session Initiation Protocol)**
  - Estabelecimento, gerenciamento e encerramento de chamadas VoIP
  - Mensagens SIP para controle de chamadas (INVITE, ACK, BYE, REGISTER)
  - Interação com NATs e firewalls
- **Comparação com H.323**
  - SIP (Internet-friendly) vs. H.323 (baseado em telefonia)

### **6. Suporte da Rede para Multimídia**
- **Modelos de Qualidade de Serviço (QoS)**
  - Best Effort (sem garantia)
  - Diferenciação de serviços (DiffServ)
  - Garantia de recursos (IntServ)
- **Técnicas de gerenciamento de tráfego**
  - **Marcação e priorização de pacotes**
  - **Agendamento (FIFO, Prioridade, Round Robin, Weighted Fair Queuing)**
  - **Controle de admissão**
  - **Reserva de recursos via RSVP (Resource Reservation Protocol)**
- **Policiamento e controle de tráfego**
  - **Token Bucket** (limitação da taxa de transmissão)
  - **Classificação e condicionamento de pacotes**
- **Serviços diferenciados (DiffServ)**
  - Classes de tráfego e PHB (Per-Hop Behavior)
  - **Expedited Forwarding (EF)**
  - **Assured Forwarding (AF)**

## Segurança em Redes

### **1. Introdução à Segurança em Redes**
- Definição e objetivos da segurança em redes:
  - **Confidencialidade**: apenas o destinatário deve compreender a mensagem.
  - **Autenticação**: confirmação da identidade do remetente e destinatário.
  - **Integridade da mensagem**: garantir que a mensagem não foi alterada.
  - **Acesso e disponibilidade**: garantir que serviços estejam acessíveis.

### **2. Princípios da Criptografia**
- **Criptografia simétrica**:
  - Ambos os lados compartilham a mesma chave.
  - Exemplos: **DES (Data Encryption Standard), AES (Advanced Encryption Standard)**.
- **Criptografia assimétrica (Chaves Pública e Privada)**:
  - Utiliza um par de chaves (pública e privada).
  - **RSA (Rivest-Shamir-Adleman)**.
- **Ataques criptográficos**:
  - **Ataque de força bruta**: testar todas as chaves possíveis.
  - **Análise estatística** de padrões nos dados criptografados.

### **3. Integridade de Mensagem e Autenticação**
- **Assinaturas digitais**:
  - Uso de criptografia para verificar autenticidade e integridade de mensagens.
- **Hashing e funções de resumo de mensagem**:
  - **MD5 e SHA-1**.
- **Autenticação baseada em desafio-resposta**:
  - Uso de números únicos (**nonce**) para evitar ataques de repetição.
- **Certificados digitais e Autoridades Certificadoras (CA)**:
  - **X.509, SSL/TLS**, e o papel das CAs na verificação de identidades.

### **4. Segurança de E-mail**
- **Criptografia de e-mails**:
  - **PGP (Pretty Good Privacy), S/MIME (Secure/Multipurpose Internet Mail Extensions)**.
- **Autenticação e integridade** em e-mails:
  - **Assinaturas digitais** para evitar falsificação de remetentes.

### **5. Segurança em Conexões TCP (SSL/TLS)**
- **SSL (Secure Sockets Layer) e TLS (Transport Layer Security)**:
  - Como garantem **confidencialidade, autenticação e integridade**.
- **Handshake SSL**:
  - **Negociação de algoritmos criptográficos** entre cliente e servidor.
  - **Troca de chaves para criptografia da sessão**.
- **MAC (Message Authentication Code)**:
  - Garante integridade dos pacotes de dados.

### **6. Segurança na Camada de Rede (IPsec)**
- **IPsec (Internet Protocol Security)**:
  - Garante **confidencialidade, integridade e autenticação** na camada de rede.
- **Modos de operação do IPsec**:
  - **Modo Transporte**: protege apenas os dados do pacote IP.
  - **Modo Túnel**: protege o pacote inteiro (usado em VPNs).
- **Protocolos do IPsec**:
  - **AH (Authentication Header)**: autenticidade e integridade.
  - **ESP (Encapsulating Security Payload)**: autenticação, integridade e criptografia.

### **7. Segurança em Redes Sem Fio (Wi-Fi)**
- **Vulnerabilidades do WEP (Wired Equivalent Privacy)**:
  - Uso de chaves fracas e IVs reutilizados facilitam ataques.
- **Melhorias com WPA/WPA2 (Wi-Fi Protected Access)**:
  - **Criptografia TKIP e AES-CCMP**.
  - **Autenticação via 802.1X/EAP (Extensible Authentication Protocol)**.
- **Ataques em redes Wi-Fi**:
  - Captura de pacotes e descriptografia.
  - Ataques de força bruta contra senhas de redes WPA/WPA2.

### **8. Firewalls e Sistemas de Detecção de Intrusão (IDS)**
- **Firewalls**:
  - **Filtragem de pacotes** baseada em regras.
  - **Firewalls de estado**: monitoram conexões ativas.
  - **Firewalls de aplicação**: controlam tráfego baseado em aplicações específicas.
- **IDS (Intrusion Detection Systems)**:
  - Monitora tráfego em busca de padrões maliciosos.
  - **Tipos de IDS**:
    - **Baseado em assinaturas** (detecta padrões conhecidos de ataque).
    - **Baseado em anomalias** (detecta comportamentos incomuns).
