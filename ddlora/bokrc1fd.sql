create table bokaurc1
(
  bkreaudd    varchar2(8) default ' ' not null,
  bkreaudt    varchar2(8) default ' ' not null,
  bkreaudp    varchar2(2) default ' ' not null,
  bkreaudr    varchar2(1) default ' ' not null,
  bkreauds    number(1,0) default 0 not null,
  bkreaudo    varchar2(4) default ' ' not null,
  dbkreboo    varchar2(8) default ' ' not null,
  bkreurno    varchar2(8) default ' ' not null,
  bkresnam    varchar2(20) default ' ' not null,
  bkrelock    varchar2(2) default ' ' not null,
  bkreadoc    varchar2(6) default ' ' not null,
  bkresdoc    varchar2(6) default ' ' not null,
  bkreedat    varchar2(8) default ' ' not null,
  bkreatim    varchar2(8) default ' ' not null,
  bkrepdat    varchar2(8) default ' ' not null,
  bkreptim    varchar2(8) default ' ' not null,
  bkreadat    varchar2(8) default ' ' not null,
  bkretype    varchar2(3) default ' ' not null,
  bkrecanc    varchar2(3) default ' ' not null,
  bkrestat    number(1,0) default 0 not null,
  bkreomem    varchar2(1) default ' ' not null,
  bkreprev    varchar2(1) default ' ' not null,
  bkreaccm    varchar2(3) default ' ' not null,
  bkreproc    varchar2(9) default ' ' not null,
  dbkrecnt    varchar2(2) default ' ' not null,
  bkreward    varchar2(3) default ' ' not null,
  bkreadmn    number(8,0) default 0 not null,
  bkreprea    varchar2(1) default ' ' not null,
  bkreebed    varchar2(3) default ' ' not null,
  bkreclss    varchar2(3) default ' ' not null,
  bkreatyp    varchar2(3) default ' ' not null,
  bkredept    varchar2(3) default ' ' not null,
  bkretdoc    varchar2(6) default ' ' not null,
  bkreclmt    varchar2(3) default ' ' not null,
  bkrerfgp    varchar2(10) default ' ' not null,
  bkregppc    varchar2(6) default ' ' not null,
  bkregpfa    varchar2(20) default ' ' not null,
  bkreresi    varchar2(3) default ' ' not null,
  bkreeaty    varchar2(3) default ' ' not null,
  bkreecra    varchar2(20) default ' ' not null,
  bkregppt    varchar2(2) default ' ' not null,
  bkredofr    varchar2(3) default ' ' not null,
  bkreoper    varchar2(4) default ' ' not null,
  dbkreelo    varchar2(3) default ' ' not null,
  bkrebkdt    varchar2(8) default ' ' not null,
  bkreindc    varchar2(1) default ' ' not null,
  bkrespar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index bokaudr1 on bokaurc1
(
bkreaudd,
bkreaudt,
bkreaudp,
bkreaudr
)
tablespace pas_indx; 
create table bokrc1af
(
  dbkreboo    varchar2(8) default ' ' not null,
  bkreurno    varchar2(8) default ' ' not null,
  bkresnam    varchar2(20) default ' ' not null,
  bkrelock    varchar2(2) default ' ' not null,
  bkreadoc    varchar2(6) default ' ' not null,
  bkresdoc    varchar2(6) default ' ' not null,
  bkreedat    varchar2(8) default ' ' not null,
  bkreatim    varchar2(8) default ' ' not null,
  bkrepdat    varchar2(8) default ' ' not null,
  bkreptim    varchar2(8) default ' ' not null,
  bkreadat    varchar2(8) default ' ' not null,
  bkretype    varchar2(3) default ' ' not null,
  bkrecanc    varchar2(3) default ' ' not null,
  bkrestat    number(1,0) default 0 not null,
  bkreomem    varchar2(1) default ' ' not null,
  bkreprev    varchar2(1) default ' ' not null,
  bkreaccm    varchar2(3) default ' ' not null,
  bkreproc    varchar2(9) default ' ' not null,
  dbkrecnt    varchar2(2) default ' ' not null,
  bkreward    varchar2(3) default ' ' not null,
  bkreadmn    number(8,0) default 0 not null,
  bkreprea    varchar2(1) default ' ' not null,
  bkreebed    varchar2(3) default ' ' not null,
  bkreclss    varchar2(3) default ' ' not null,
  bkreatyp    varchar2(3) default ' ' not null,
  bkredept    varchar2(3) default ' ' not null,
  bkretdoc    varchar2(6) default ' ' not null,
  bkreclmt    varchar2(3) default ' ' not null,
  bkrerfgp    varchar2(10) default ' ' not null,
  bkregppc    varchar2(6) default ' ' not null,
  bkregpfa    varchar2(20) default ' ' not null,
  bkreresi    varchar2(3) default ' ' not null,
  bkreeaty    varchar2(3) default ' ' not null,
  bkreecra    varchar2(20) default ' ' not null,
  bkregppt    varchar2(2) default ' ' not null,
  bkredofr    varchar2(3) default ' ' not null,
  bkreoper    varchar2(4) default ' ' not null,
  dbkreelo    varchar2(3) default ' ' not null,
  bkrebkdt    varchar2(8) default ' ' not null,
  bkreindc    varchar2(1) default ' ' not null,
  bkrespar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokrc1a1 primary key( 
dbkreboo)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index bokrc1a2 on bokrc1af
(
bkresnam,
dbkreboo
)
  tablespace pas_indx; 
create unique index bokrc1a3 on bokrc1af
(
bkreadoc,
bkreedat,
dbkreboo
)
  tablespace pas_indx; 
create unique index bokrc1a4 on bokrc1af
(
bkreedat,
dbkreboo
)
  tablespace pas_indx; 
create unique index bokrc1a5 on bokrc1af
(
bkrepdat,
bkreptim,
dbkreboo
)
  tablespace pas_indx; 
create unique index bokrc1a6 on bokrc1af
(
bkreurno,
dbkreboo
)
  tablespace pas_indx; 
create unique index bokrc1a7 on bokrc1af
(
bkreward,
bkreedat,
dbkreboo
)
  tablespace pas_indx; 
