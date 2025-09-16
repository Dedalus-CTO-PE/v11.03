create table ibahlpaf
(
  ibhpname    varchar2(8) default ' ' not null,
  dibhplin    varchar2(3) default ' ' not null,
  ibhplink    varchar2(8) default ' ' not null,
  ibhptext    varchar2(76) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibahlpa1 primary key( 
ibhpname,
dibhplin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibahlpa2 on ibahlpaf
(
dibhplin,
ibhpname
)
  tablespace pas_indx; 
