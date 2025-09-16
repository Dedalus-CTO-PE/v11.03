create table pmscnoaf
(
  pmcncrno    char(8) default ' ' not null,
  pmcndate    char(8) default ' ' not null,
  pmcnvisn    char(8) default ' ' not null,
  pmcninvn    char(8) default ' ' not null,
  pmcnsyst    char(2) default ' ' not null,
  pmcnstat    char(1) default ' ' not null,
  pmcnreas    char(3) default ' ' not null,
  pmcnamnt    decimal(14,2) default 0 not null,
  pmcngstm    decimal(14,2) default 0 not null,
  pmcncdat    char(8) default ' ' not null,
  pmcnctim    char(8) default ' ' not null,
  pmcncuid    char(10) default ' ' not null,
  pmcnspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index pmscnoa1 on pmscnoaf
(
pmcncrno
);
create unique index pmscnoa2 on pmscnoaf
(
pmcnvisn,
pmcncrno
);
create unique index pmscnoa3 on pmscnoaf
(
pmcninvn,
pmcncrno
);
create unique index pmscnoa4 on pmscnoaf
(
pmcndate,
pmcnsyst,
pmcncrno
);
revoke all on pmscnoaf from public ; 
grant select on pmscnoaf to public ; 
