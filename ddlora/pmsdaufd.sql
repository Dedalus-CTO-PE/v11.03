create table pmsdauaf
(
  pmdeurno    varchar2(8) default ' ' not null,
  pmdecdat    varchar2(8) default ' ' not null,
  pmdectim    varchar2(8) default ' ' not null,
  pmdertyp    varchar2(3) default ' ' not null,
  pmdefl01    varchar2(100) default ' ' not null,
  pmdefl02    varchar2(100) default ' ' not null,
  pmdefl03    varchar2(100) default ' ' not null,
  pmdefl04    varchar2(100) default ' ' not null,
  pmdefl05    varchar2(100) default ' ' not null,
  pmdefl06    varchar2(100) default ' ' not null,
  pmdefl07    varchar2(100) default ' ' not null,
  pmdefl08    varchar2(100) default ' ' not null,
  pmdefl09    varchar2(100) default ' ' not null,
  pmdefl10    varchar2(100) default ' ' not null,
  pmdecuid    varchar2(10) default ' ' not null,
  pmdespar    varchar2(200) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsdaua1 primary key( 
pmdeurno,
pmdecdat,
pmdectim,
pmdertyp)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsdaua2 on pmsdauaf
(
pmdeurno,
pmdertyp,
pmdecdat,
pmdectim
)
  tablespace pas_indx; 
create unique index pmsdaua3 on pmsdauaf
(
pmdertyp,
pmdecdat,
pmdectim,
pmdeurno
)
  tablespace pas_indx; 
