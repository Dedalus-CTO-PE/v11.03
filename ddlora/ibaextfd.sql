create table ibaextaf
(
  ibexextn    varchar2(4) default ' ' not null,
  ibexdesc    varchar2(20) default ' ' not null,
  ibexchrg    varchar2(3) default ' ' not null,
  ibexetyp    number(2,0) default 0 not null,
  ibexdebt    varchar2(8) default ' ' not null,
  ibexptyp    varchar2(3) default ' ' not null,
  ibexlevl    varchar2(3) default ' ' not null,
  ibexsrvl    varchar2(3) default ' ' not null,
  dibexten    varchar2(2) default ' ' not null,
  ibexlvld    varchar2(3) default ' ' not null,
  ibexspar    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaexta1 primary key( 
ibexextn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibaexta2 on ibaextaf
(
ibexdebt,
ibexextn
)
  tablespace pas_indx; 
