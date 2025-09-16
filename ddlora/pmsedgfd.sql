create table pmsedgaf
(
  pmegrtyp    varchar2(1) default ' ' not null,
  pmegkeyv    varchar2(30) default ' ' not null,
  pmegdrgv    varchar2(3) default ' ' not null,
  pmegpycd    varchar2(3) default ' ' not null,
  pmegfdat    varchar2(8) default ' ' not null,
  pmegtdat    varchar2(8) default ' ' not null,
  pmegcuid    varchar2(10) default ' ' not null,
  pmegcdat    varchar2(8) default ' ' not null,
  pmegctim    varchar2(8) default ' ' not null,
  pmeguuid    varchar2(10) default ' ' not null,
  pmegudat    varchar2(8) default ' ' not null,
  pmegutim    varchar2(8) default ' ' not null,
  pmegcomm    varchar2(50) default ' ' not null,
  pmegspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsedga1 primary key( 
pmegrtyp,
pmegkeyv,
pmegdrgv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsedga2 on pmsedgaf
(
pmegrtyp,
pmegkeyv,
pmegfdat,
pmegdrgv
)
  tablespace pas_indx; 
