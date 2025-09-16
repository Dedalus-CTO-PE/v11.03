create table pmsdauaf
(
  pmdeurno    char(8) default ' ' not null,
  pmdecdat    char(8) default ' ' not null,
  pmdectim    char(8) default ' ' not null,
  pmdertyp    char(3) default ' ' not null,
  pmdefl01    char(100) default ' ' not null,
  pmdefl02    char(100) default ' ' not null,
  pmdefl03    char(100) default ' ' not null,
  pmdefl04    char(100) default ' ' not null,
  pmdefl05    char(100) default ' ' not null,
  pmdefl06    char(100) default ' ' not null,
  pmdefl07    char(100) default ' ' not null,
  pmdefl08    char(100) default ' ' not null,
  pmdefl09    char(100) default ' ' not null,
  pmdefl10    char(100) default ' ' not null,
  pmdecuid    char(10) default ' ' not null,
  pmdespar    char(200) default ' ' not null,
  lf          char(1)
);
create unique index pmsdaua1 on pmsdauaf
(
pmdeurno,
pmdecdat,
pmdectim,
pmdertyp
);
create unique index pmsdaua2 on pmsdauaf
(
pmdeurno,
pmdertyp,
pmdecdat,
pmdectim
);
create unique index pmsdaua3 on pmsdauaf
(
pmdertyp,
pmdecdat,
pmdectim,
pmdeurno
);
revoke all on pmsdauaf from public ; 
grant select on pmsdauaf to public ; 
