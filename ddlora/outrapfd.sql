create table outrapaf
(
  dotrpobk    varchar2(8) default ' ' not null,
  dotrprbk    varchar2(8) default ' ' not null,
  otrpdate    varchar2(8) default ' ' not null,
  otrptime    varchar2(5) default ' ' not null,
  otrplogi    varchar2(4) default ' ' not null,
  otrpspar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outrapa1 primary key( 
dotrpobk,
dotrprbk)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outrapa2 on outrapaf
(
dotrprbk,
dotrpobk
)
  tablespace pas_indx; 
