## Camada de Enlace
### **1. Introdução à Camada de Enlace**
- Definição e papel da camada de enlace
- Serviços fornecidos pela camada de enlace
- Terminologia:
  - Nós (hosts e roteadores)
  - Links de comunicação (canais)
  - Pacote de camada 2: **Frame**

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
