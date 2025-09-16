create table pmsccdaf
(
  pmcdurno    varchar2(8) default ' ' not null,
  pmcdctyp    varchar2(3) default ' ' not null,
  pmcdcnum    varchar2(20) default ' ' not null,
  pmcdexdt    varchar2(8) default ' ' not null,
  pmcdcdat    varchar2(8) default ' ' not null,
  pmcdctim    varchar2(8) default ' ' not null,
  pmcdcuid    varchar2(10) default ' ' not null,
  pmcdudat    varchar2(8) default ' ' not null,
  pmcdutim    varchar2(8) default ' ' not null,
  pmcduuid    varchar2(10) default ' ' not null,
  pmcddvac    varchar2(3) default ' ' not null,
  pmcdspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsccda1 primary key( 
pmcdurno,
pmcdexdt,
pmcdctyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsccda2 on pmsccdaf
(
pmcdctyp,
pmcdexdt,
pmcdurno
)
  tablespace pas_indx; 
create unique index pmsccda3 on pmsccdaf
(
pmcdctyp,
pmcdcnum,
pmcdexdt,
pmcdurno
)
  tablespace pas_indx; 
