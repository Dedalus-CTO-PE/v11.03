create table ibaphnaf
(
  ibphsnam    varchar2(25) default ' ' not null,
  ibphgnam    varchar2(30) default ' ' not null,
  ibphextn    varchar2(6) default ' ' not null,
  ibphdept    varchar2(3) default ' ' not null,
  ibphtitl    varchar2(20) default ' ' not null,
  ibphpgnm    varchar2(12) default ' ' not null,
  ibphpgcd    varchar2(6) default ' ' not null,
  ibphcont    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibaphon1 primary key( 
ibphsnam,
ibphgnam,
ibphextn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibaphon2 on ibaphnaf
(
ibphdept,
ibphsnam,
ibphgnam,
ibphextn
)
  tablespace pas_indx; 
create unique index ibaphon3 on ibaphnaf
(
ibphgnam,
ibphsnam,
ibphextn
)
  tablespace pas_indx; 
create unique index ibaphon4 on ibaphnaf
(
ibphextn,
ibphsnam,
ibphgnam
)
  tablespace pas_indx; 
create unique index ibaphon5 on ibaphnaf
(
ibphtitl,
ibphsnam,
ibphgnam,
ibphextn
)
  tablespace pas_indx; 
