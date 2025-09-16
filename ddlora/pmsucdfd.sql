create table pmsucdaf
(
  pmucurno    varchar2(8) default ' ' not null,
  pmucctty    varchar2(3) default ' ' not null,
  pmuccnum    varchar2(6) default ' ' not null,
  pmuclnum    varchar2(3) default ' ' not null,
  pmuccomm    varchar2(100) default ' ' not null,
  pmucspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsucda1 primary key( 
pmucurno,
pmucctty,
pmuccnum,
pmuclnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
