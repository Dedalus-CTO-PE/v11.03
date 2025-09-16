create table hicrciaf
(
  hcribtch    char(5) default ' ' not null,
  hcrivpos    char(2) default ' ' not null,
  hcriitmn    char(9) default ' ' not null,
  hcriidat    char(8) default ' ' not null,
  hcriicnt    char(2) default ' ' not null,
  hcrimedi    char(10) default ' ' not null,
  hcricard    char(1) default ' ' not null,
  hcrisurn    char(18) default ' ' not null,
  hcrifnam    char(12) default ' ' not null,
  hcribena    decimal(14,2) default 0 not null,
  hcribenp    decimal(14,2) default 0 not null,
  hcribenr    decimal(14,2) default 0 not null,
  hcriclmn    char(8) default ' ' not null,
  hcrivisn    char(8) default ' ' not null,
  hcrirejr    char(3) default ' ' not null,
  hcrirejd    char(8) default ' ' not null,
  hcrispar    char(20) default ' ' not null,
  lf          char(1)
);
create unique index hicrcia1 on hicrciaf
(
hcribtch,
hcrivpos,
hcriitmn,
hcriidat,
hcriicnt
);
create unique index hicrcia2 on hicrciaf
(
hcriclmn,
hcrivisn,
hcriicnt
);
revoke all on hicrciaf from public ; 
grant select on hicrciaf to public ; 
