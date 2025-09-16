create table pmsuchaf
(
  pmuhurno    varchar2(8) default ' ' not null,
  pmuhctyp    varchar2(3) default ' ' not null,
  pmuhcnum    varchar2(6) default ' ' not null,
  pmuhcuid    varchar2(10) default ' ' not null,
  pmuhcdat    varchar2(8) default ' ' not null,
  pmuhctim    varchar2(8) default ' ' not null,
  pmuhoccg    varchar2(3) default ' ' not null,
  pmuhdelt    varchar2(1) default ' ' not null,
  pmuhduid    varchar2(10) default ' ' not null,
  pmuhddat    varchar2(8) default ' ' not null,
  pmuhdtim    varchar2(8) default ' ' not null,
  pmuhdocg    varchar2(3) default ' ' not null,
  pmuhspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsucha1 primary key( 
pmuhurno,
pmuhctyp,
pmuhcnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
