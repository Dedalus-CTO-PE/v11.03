create table ibaalvaf
(
  ibavvisn    varchar2(8) default ' ' not null,
  ibavavis    varchar2(20) default ' ' not null,
  ibavtype    varchar2(2) default ' ' not null,
  ibavspar    varchar2(18) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaalva1 primary key( 
ibavvisn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibaalva2 on ibaalvaf
(
ibavavis,
ibavvisn
)
  tablespace pas_indx; 
