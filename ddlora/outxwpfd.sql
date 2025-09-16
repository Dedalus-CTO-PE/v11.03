create table outxwpaf
(
  dotxwout    varchar2(8) default ' ' not null,
  dotxwlin    varchar2(4) default ' ' not null,
  otxwdesc    varchar2(70) default ' ' not null,
  otxwspar    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outxwpa1 primary key( 
dotxwout,
dotxwlin)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
