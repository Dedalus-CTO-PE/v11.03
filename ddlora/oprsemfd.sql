create table opraudsm
(
  opsmaudd    varchar2(8) default ' ' not null,
  opsmaudt    varchar2(8) default ' ' not null,
  opsmaudp    varchar2(2) default ' ' not null,
  opsmaudr    varchar2(1) default ' ' not null,
  opsmauds    number(1,0) default 0 not null,
  opsmaudo    varchar2(4) default ' ' not null,
  opsmclin    varchar2(6) default ' ' not null,
  dopsmday    varchar2(1) default ' ' not null,
  opsmtime    varchar2(5) default ' ' not null,
  opsmftyp    number(1,0) default 0 not null,
  opsmmrfq    varchar2(5) default ' ' not null,
  opsmyrfq    varchar2(53) default ' ' not null,
  opsmdura    number(4,0) default 0 not null,
  opsmtper    varchar2(3) default ' ' not null,
  opsmtype    varchar2(3) default ' ' not null,
  opsmthet    varchar2(6) default ' ' not null,
  opsmendt    varchar2(5) default ' ' not null,
  opsmbrkt    number(3,0) default 0 not null,
  opsmprep    number(2,0) default 0 not null,
  opsmanae    varchar2(6) default ' ' not null,
  opsmxdoc    varchar2(6) default ' ' not null,
  opsmstat    number(1,0) default 0 not null,
  opsmspi1    varchar2(50) default ' ' not null,
  opsmspi2    varchar2(50) default ' ' not null,
  opsmndlk    varchar2(2) default ' ' not null,
  opsmstyp    varchar2(3) default ' ' not null,
  opsmdgsi    varchar2(3) default ' ' not null,
  opsmhosp    varchar2(3) default ' ' not null,
  opsmspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index opraudsm on opraudsm
(
opsmaudd,
opsmaudt,
opsmaudp,
opsmaudr
)
tablespace pas_indx; 
create table oprsemaf
(
  opsmclin    varchar2(6) default ' ' not null,
  dopsmday    varchar2(1) default ' ' not null,
  opsmtime    varchar2(5) default ' ' not null,
  opsmftyp    number(1,0) default 0 not null,
  opsmmrfq    varchar2(5) default ' ' not null,
  opsmyrfq    varchar2(53) default ' ' not null,
  opsmdura    number(4,0) default 0 not null,
  opsmtper    varchar2(3) default ' ' not null,
  opsmtype    varchar2(3) default ' ' not null,
  opsmthet    varchar2(6) default ' ' not null,
  opsmendt    varchar2(5) default ' ' not null,
  opsmbrkt    number(3,0) default 0 not null,
  opsmprep    number(2,0) default 0 not null,
  opsmanae    varchar2(6) default ' ' not null,
  opsmxdoc    varchar2(6) default ' ' not null,
  opsmstat    number(1,0) default 0 not null,
  opsmspi1    varchar2(50) default ' ' not null,
  opsmspi2    varchar2(50) default ' ' not null,
  opsmndlk    varchar2(2) default ' ' not null,
  opsmstyp    varchar2(3) default ' ' not null,
  opsmdgsi    varchar2(3) default ' ' not null,
  opsmhosp    varchar2(3) default ' ' not null,
  opsmspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprsema1 primary key( 
opsmhosp,
opsmclin,
dopsmday,
opsmtime,
opsmthet)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprsema2 on oprsemaf
(
opsmclin,
dopsmday,
opsmtime,
opsmthet,
opsmhosp
)
  tablespace pas_indx; 
