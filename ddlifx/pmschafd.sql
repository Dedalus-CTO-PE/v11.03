create table pmschaaf
(
  pmchadmn    char(8) default ' ' not null,
  pmchtdat    char(8) default ' ' not null,
  pmchttim    char(8) default ' ' not null,
  pmchtwar    char(3) default ' ' not null,
  pmchtbed    char(3) default ' ' not null,
  pmchcdat    char(8) default ' ' not null,
  pmchctim    char(8) default ' ' not null,
  pmchctyp    char(3) default ' ' not null,
  pmchreas    char(3) default ' ' not null,
  pmchoval    char(100) default ' ' not null,
  pmchnval    char(100) default ' ' not null,
  pmchwebc    char(10) default ' ' not null,
  pmchdatc    char(8) default ' ' not null,
  pmchtimc    char(8) default ' ' not null,
  pmchspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmschaa1 on pmschaaf
(
pmchadmn,
pmchtdat,
pmchttim,
pmchtwar,
pmchtbed,
pmchcdat,
pmchctim
);
revoke all on pmschaaf from public ; 
grant select on pmschaaf to public ; 
