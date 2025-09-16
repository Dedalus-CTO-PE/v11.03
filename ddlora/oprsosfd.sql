create table oprsosaf
(
  opspdate    varchar2(6) default ' ' not null,
  opspdoct    varchar2(6) default ' ' not null,
  opspoper    varchar2(9) default ' ' not null,
  opspttim    number(6,0) default 0 not null,
  opspltim    number(6,0) default 0 not null,
  opsphtim    number(6,0) default 0 not null,
  opspncas    number(6,0) default 0 not null,
  opspnopr    number(6,0) default 0 not null,
  opspspar    varchar2(13) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprsosa1 primary key( 
opspdate,
opspdoct,
opspoper)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprsosa2 on oprsosaf
(
opspdate,
opspoper,
opspdoct
)
  tablespace pas_indx; 
