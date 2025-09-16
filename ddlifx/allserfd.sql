create table allseraf
(
  alsrdept    char(3) default ' ' not null,
  alsrserv    char(6) default ' ' not null,
  alsrdesc    char(40) default ' ' not null,
  alsrleng    char(2) default ' ' not null,
  alsrvacs    char(1) default ' ' not null,
  alsractv    char(1) default ' ' not null,
  alsrcdat    char(8) default ' ' not null,
  alsrctim    char(8) default ' ' not null,
  alsrcuid    char(10) default ' ' not null,
  alsrudat    char(8) default ' ' not null,
  alsrutim    char(8) default ' ' not null,
  alsruuid    char(10) default ' ' not null,
  alsrgrou    char(1) default ' ' not null,
  alsrnura    char(1) default ' ' not null,
  alsrmhdp    char(4) default ' ' not null,
  alsrspec    char(3) default ' ' not null,
  alsrhome    char(1) default ' ' not null,
  alsrspar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index allsera1 on allseraf
(
alsrdept,
alsrserv
);
create unique index allsera2 on allseraf
(
alsrdept,
alsrdesc,
alsrserv
);
revoke all on allseraf from public ; 
grant select on allseraf to public ; 
