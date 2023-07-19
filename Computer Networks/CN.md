# Computer Networks

## Basic of Computer Networks

### Layered Architecture

There are 5 layers and each layer add info and encapsulates the passed from previous layer. Data goes from L5 to L1 at sender's end and read from L1 to L5 at reciever's end. Data at each layer has two parts : header and payload. Payload is packet from the layer above.

| Layers | Name              | Info     | Data       | Task                                                  |
| ------ | ----------------- | -------- | ---------- | ----------------------------------------------------- |
| L5     | Application Layer | Message  | M          | Support Network applications and services             |
| L4     | Transport Layer   | Segment  | M+Ht       | End-to-end data transport b/w apps on different hosts |
| L3     | Network Layer     | Datagram | M+Ht+Hn    | routing packets b/w hosts on diff n/w                 |
| L2     | Datalink Layer    | Frames   | M+Ht+Hn+Hd | transfer data b/w adjecent nodes.                     |
| L1     | Physical Layer    | Signals  |            | transmit bits over physical medium                    |

### Questions

* What is the difference between a host and an end system?

  * A host provides resources and services to other devices on a network, while end systems consume those resources and services to carry out tasks or access information.
* Is a Web server an end system?

  * web server is a host that provides a service
* What are the most popular wireless Internet access technologies today.

  * Wifi
  * Cellular Network
  * Sattelite
  * Fixed Wireless
* Different types of delay and which are varaible ?

  * Processing Delay : time taken by routers and switch to process pakcet headers.
  * Queueing Delay : time take by packet to stay in queue and wait to be transmitted.
  * Transmission Delay : time taken to transmit packet's bits onto link.
  * Propagation Delay : time taken to travel from source to destination.
    Processing and propagation is fixed. Queueing and transmission is variable depends on number of existing packet, congestion and size of current packet.

## Application Layer

There are two type of Application architecture :

1. Client-Server : Always on host called serever which service requests from other hosts called clients. e.g. Telnet, email, FTP.
2. Peer-to-Peer : Peers connect without communicating to dedicated server. Direct communication between connected hosts. Self scalable.

Process that waits to be contacted first is called server process.

Process communicates with the network using a software interface called socket. Process is analogous to house and socket is analogous to door.

Application developer can only control application layer side of socket and has little control of transport-layer side of socket. Like chosing which transport protocol and fix buffer size.

Transport services required by any application can be classified based on following factors.

* Reliable data trasfer : Confidence that data will arrive wihout error. Loss-tolerant apps.
* Throughput : Guaranteed trhoughtput available for bandwidth-sensitive apps.
* Timing : Low latency for real-time apps.
* Security : Encryption and end-point authentication.

TCP : Connection-oriented service and reliable data transfer service. Handshake is done between server and host before transfer. Full-duplex connection is established.

UDP : Lightwieght, no handshake, connectionless and unreliable.

### Web & HTTP

Web operates on demand unlike conventional broadcast radio which force user to tune in when content is provided.

HyperText Transfer Protocol is Web's application layer protocol implemented in two programs :

1. Client Program :
2. Server Program:

Web servers store each web objects addressable by a URL.  HTTP defines how web clients request web pages and how web servers transfer these web pages to client.

HTTP uses TCP as its underlying protocol so it need not worry about data loss and recovery. HTTP client first initiates a TCP connection with server then once connection is established it sends the Http request. HTTP is a stateless protocol which means server sends file without storing any state info about the client.

Non-Persistent Connections : Multiple requests are made over multiple connections, one for each.

    Http client initiates TCP connection --> Connection estbalished --> Client sends Http request -->  Server sends the Response --> Server tells TCP to close connection  --> Client receives and closes connection.

HTTP Request Msg format and example.

| Request line | Method       |  | URL   |  | Version |                                                 |
| ------------ | ------------ | - | ----- | - | ------- | ----------------------------------------------- |
| Header lines | header field |  | Value |  |         |                                                 |
| Blank line   |              |  |       |  |         | blank lines used to separate header and body    |
| Entity body  |              |  |       |  |         | takes data from user. Like PUT method in forms. |

| Get             | /somedir/page.html | Http/1.1/ |
| --------------- | ------------------ | --------- |
| Host            | www.mywebsite.com  |           |
| Connection      | close              |           |
| User-agent      | Morzilla           |           |
| Accept-languges | Fr                 |           |

Using GET method requesting page.html using htttp1.1 version from mywebsite.com. This connection is close meaning server can close it. Requesting from morzila browser. Preffered language is french.

HTTP Reponse message format and example.

| Status line  | Version      |  | status code |  | phrase |  |  |
| ------------ | ------------ | - | ----------- | - | ------ | - | - |
| Header lines | header field |  | value       |  |        |  |  |
| Blank line   |              |  |             |  |        |  |  |
| Body         |              |  |             |  |        |  |  |

| Http/1.1/      | 200           | OK |
| -------------- | ------------- | -- |
| Connection     | close         |    |
| Date           | 3March2023    |    |
| Server         | Apache CentOS |    |
| Last Modified  | 1March2023    |    |
| Content Lenght | 6821          |    |
| Content type   | html/text     |    |
| data data data |               |    |

Web Cache also called a proxy server has its own disk storage and keeps copies of recenlty requested objects. Cache is both a server and a client at same time. If it does not have a copy it takes from server and keeps it and forwards the same to the client. Recent check is also made using http response from server to keep itself updated. Using condition GET using If-Modified-since: `<date>`. Server sends the response with data in body if it has data more recent than specified date or it send the respone with status code 304 and empty body.

### Electronic Mail

There are three main components : User Agent, Mail server and Simple Mail Transfer Protocol.

Mail Server is the core and each recipient has a mailbox in the mail server.  SMTP is the mail application-layer protocol that uses TCP to send mail.

Mail message format : header and body. From, To, Subject are part of header.

User has a local agent installed in its computer which is connect to its mailbox on a shared mail server which sends message to receivers mail server. Sender uses HTTP or SMTP to send mail to its mail server. Mail servers user SMTP to communicate with each other. Receiver uses HTTP or IMAP(Internet Mail Access Protocol) to pull message from its mail server.
SMTP is a push protocol to it can't be used by reciever to get the message.

### **Domain Name Service**

DNS is a distributed database of hostnames to ip adderesses mapping. Usually info is cached in a neary servers. It follows distributed heirarchy, root dns server, top level domain, authoritive dns.

Name , Value , Type , TTL  is a typical record maintained in some dns.

### Peer-to-Peer file Distribution

Peers are not owned by service provider but a laptop, PC, smartphone. Bittorrent is a popular P2P protocol for file distrbution. User make concurrent TCP connections with all peers in the list.

### Questions

* Do port numbers need to be unique ?

  * Each process or application that communicates over the network must have a unique port number assigned to it. If two processes or applications on the same host use the same port number, there can be conflicts and communication errors can occur.
* Why are post address are shorter than IP address ?

  * Port numbers are 16-bit unsigned integers that are used to identify specific processes or applications running on a host. They operate at the transport layer of the protocol stack and are used to demultiplex incoming data to the correct process or application. Since port numbers are only used within a single host or network, they do not need to be globally unique like IP addresses. Port numbers are assigned locally to each process or application, so they only need to be unique within that host or network. This allows port numbers to be shorter than IP addresses.
* What is cache invalidation ?

  * Cache invalidation is the process of removing or updating cached data when the source data has been modified or deleted. This process is necessary to ensure that the cached data is kept up-to-date with the source data and to prevent inconsistencies and errors in the application.
* Why TCP needs two sockets and Udp only one socket

  * TCP requires two sockets because it establishes a dedicated, bi-directional communication channel between two endpoints, while UDP only requires one socket because it does not establish such a dedicated channel. The choice of TCP or UDP depends on the specific requirements of the application, such as the level of reliability and order of delivery needed for the data.
