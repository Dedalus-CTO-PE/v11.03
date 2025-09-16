create table ibamdpaf
(
  ibmdmenu    varchar2(3) default ' ' not null,
  ibmdline    varchar2(2) default ' ' not null,
  ibmddata    varchar2(80) default ' ' not null,
  ibmdattr    varchar2(80) default ' ' not null,
  ibmdspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibamdpa1 primary key( 
ibmdmenu,
ibmdline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
