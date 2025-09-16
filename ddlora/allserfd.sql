create table allseraf
(
  alsrdept    varchar2(3) default ' ' not null,
  alsrserv    varchar2(6) default ' ' not null,
  alsrdesc    varchar2(40) default ' ' not null,
  alsrleng    varchar2(2) default ' ' not null,
  alsrvacs    varchar2(1) default ' ' not null,
  alsractv    varchar2(1) default ' ' not null,
  alsrcdat    varchar2(8) default ' ' not null,
  alsrctim    varchar2(8) default ' ' not null,
  alsrcuid    varchar2(10) default ' ' not null,
  alsrudat    varchar2(8) default ' ' not null,
  alsrutim    varchar2(8) default ' ' not null,
  alsruuid    varchar2(10) default ' ' not null,
  alsrgrou    varchar2(1) default ' ' not null,
  alsrnura    varchar2(1) default ' ' not null,
  alsrmhdp    varchar2(4) default ' ' not null,
  alsrspec    varchar2(3) default ' ' not null,
  alsrhome    varchar2(1) default ' ' not null,
  alsrspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allsera1 primary key( 
alsrdept,
alsrserv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allsera2 on allseraf
(
alsrdept,
alsrdesc,
alsrserv
)
  tablespace pas_indx; 
