create table paticuaf
(
  dpticuad    varchar2(8) default ' ' not null,
  pticuint    number(5,0) default 0 not null,
  pticumec    number(5,0) default 0 not null,
  pticuccu    number(5,0) default 0 not null,
  pticambn    varchar2(15) default ' ' not null,
  pticcpap    number(5,0) default 0 not null,
  ptichncu    number(5,0) default 0 not null,
  pticintm    varchar2(2) default ' ' not null,
  pticmecm    varchar2(2) default ' ' not null,
  pticchsc    varchar2(15) default ' ' not null,
  pticuspr    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint paticua1 primary key( 
dpticuad)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
