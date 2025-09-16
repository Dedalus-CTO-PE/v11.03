create table bokaurc1
(
  bkreaudd    char(8) default ' ' not null,
  bkreaudt    char(8) default ' ' not null,
  bkreaudp    char(2) default ' ' not null,
  bkreaudr    char(1) default ' ' not null,
  bkreauds    decimal(1,0) default 0 not null,
  bkreaudo    char(4) default ' ' not null,
  dbkreboo    char(8) default ' ' not null,
  bkreurno    char(8) default ' ' not null,
  bkresnam    char(20) default ' ' not null,
  bkrelock    char(2) default ' ' not null,
  bkreadoc    char(6) default ' ' not null,
  bkresdoc    char(6) default ' ' not null,
  bkreedat    char(8) default ' ' not null,
  bkreatim    char(8) default ' ' not null,
  bkrepdat    char(8) default ' ' not null,
  bkreptim    char(8) default ' ' not null,
  bkreadat    char(8) default ' ' not null,
  bkretype    char(3) default ' ' not null,
  bkrecanc    char(3) default ' ' not null,
  bkrestat    decimal(1,0) default 0 not null,
  bkreomem    char(1) default ' ' not null,
  bkreprev    char(1) default ' ' not null,
  bkreaccm    char(3) default ' ' not null,
  bkreproc    char(9) default ' ' not null,
  dbkrecnt    char(2) default ' ' not null,
  bkreward    char(3) default ' ' not null,
  bkreadmn    decimal(8,0) default 0 not null,
  bkreprea    char(1) default ' ' not null,
  bkreebed    char(3) default ' ' not null,
  bkreclss    char(3) default ' ' not null,
  bkreatyp    char(3) default ' ' not null,
  bkredept    char(3) default ' ' not null,
  bkretdoc    char(6) default ' ' not null,
  bkreclmt    char(3) default ' ' not null,
  bkrerfgp    char(10) default ' ' not null,
  bkregppc    char(6) default ' ' not null,
  bkregpfa    char(20) default ' ' not null,
  bkreresi    char(3) default ' ' not null,
  bkreeaty    char(3) default ' ' not null,
  bkreecra    char(20) default ' ' not null,
  bkregppt    char(2) default ' ' not null,
  bkredofr    char(3) default ' ' not null,
  bkreoper    char(4) default ' ' not null,
  dbkreelo    char(3) default ' ' not null,
  bkrebkdt    char(8) default ' ' not null,
  bkreindc    char(1) default ' ' not null,
  bkrespar    char(50) default ' ' not null,
  lf          char(1)
);
create index bokaudr1 on bokaurc1
(
bkreaudd,
bkreaudt,
bkreaudp,
bkreaudr
);
revoke all on bokaurc1 from public ; 
grant select on bokaurc1 to public ; 
create table bokrc1af
(
  dbkreboo    char(8) default ' ' not null,
  bkreurno    char(8) default ' ' not null,
  bkresnam    char(20) default ' ' not null,
  bkrelock    char(2) default ' ' not null,
  bkreadoc    char(6) default ' ' not null,
  bkresdoc    char(6) default ' ' not null,
  bkreedat    char(8) default ' ' not null,
  bkreatim    char(8) default ' ' not null,
  bkrepdat    char(8) default ' ' not null,
  bkreptim    char(8) default ' ' not null,
  bkreadat    char(8) default ' ' not null,
  bkretype    char(3) default ' ' not null,
  bkrecanc    char(3) default ' ' not null,
  bkrestat    decimal(1,0) default 0 not null,
  bkreomem    char(1) default ' ' not null,
  bkreprev    char(1) default ' ' not null,
  bkreaccm    char(3) default ' ' not null,
  bkreproc    char(9) default ' ' not null,
  dbkrecnt    char(2) default ' ' not null,
  bkreward    char(3) default ' ' not null,
  bkreadmn    decimal(8,0) default 0 not null,
  bkreprea    char(1) default ' ' not null,
  bkreebed    char(3) default ' ' not null,
  bkreclss    char(3) default ' ' not null,
  bkreatyp    char(3) default ' ' not null,
  bkredept    char(3) default ' ' not null,
  bkretdoc    char(6) default ' ' not null,
  bkreclmt    char(3) default ' ' not null,
  bkrerfgp    char(10) default ' ' not null,
  bkregppc    char(6) default ' ' not null,
  bkregpfa    char(20) default ' ' not null,
  bkreresi    char(3) default ' ' not null,
  bkreeaty    char(3) default ' ' not null,
  bkreecra    char(20) default ' ' not null,
  bkregppt    char(2) default ' ' not null,
  bkredofr    char(3) default ' ' not null,
  bkreoper    char(4) default ' ' not null,
  dbkreelo    char(3) default ' ' not null,
  bkrebkdt    char(8) default ' ' not null,
  bkreindc    char(1) default ' ' not null,
  bkrespar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index bokrc1a1 on bokrc1af
(
dbkreboo
);
create unique index bokrc1a2 on bokrc1af
(
bkresnam,
dbkreboo
);
create unique index bokrc1a3 on bokrc1af
(
bkreadoc,
bkreedat,
dbkreboo
);
create unique index bokrc1a4 on bokrc1af
(
bkreedat,
dbkreboo
);
create unique index bokrc1a5 on bokrc1af
(
bkrepdat,
bkreptim,
dbkreboo
);
create unique index bokrc1a6 on bokrc1af
(
bkreurno,
dbkreboo
);
create unique index bokrc1a7 on bokrc1af
(
bkreward,
bkreedat,
dbkreboo
);
revoke all on bokrc1af from public ; 
grant select on bokrc1af to public ; 
