create table mrtmasaf
(
  mrmaurno    char(8) default ' ' not null,
  mrmahhos    char(3) default ' ' not null,
  mrmahloc    char(4) default ' ' not null,
  mrmadoty    char(3) default ' ' not null,
  dmrmavol    char(2) default ' ' not null,
  mrmastat    char(3) default ' ' not null,
  mrmacomm    char(20) default ' ' not null,
  mrmakey     char(10) default ' ' not null,
  mrmachos    char(3) default ' ' not null,
  mrmacloc    char(4) default ' ' not null,
  mrmafilm    char(25) default ' ' not null,
  mrmaepdt    char(8) default ' ' not null,
  mrmadtcr    char(8) default ' ' not null,
  mrmatmcr    char(8) default ' ' not null,
  mrmacuid    char(10) default ' ' not null,
  mrmadtup    char(8) default ' ' not null,
  mrmatmup    char(8) default ' ' not null,
  mrmauuid    char(10) default ' ' not null,
  mrmaohos    char(3) default ' ' not null,
  mrmaspar    char(51) default ' ' not null,
  lf          char(1)
);
create unique index mrtmasa1 on mrtmasaf
(
mrmaurno,
mrmahhos,
mrmahloc,
mrmadoty,
dmrmavol
);
create unique index mrtmasa2 on mrtmasaf
(
mrmakey
);
create unique index mrtmasa3 on mrtmasaf
(
mrmaurno,
dmrmavol,
mrmahhos,
mrmahloc,
mrmadoty
);
create unique index mrtmasa4 on mrtmasaf
(
mrmaurno,
mrmadoty,
dmrmavol,
mrmahhos,
mrmahloc
);
revoke all on mrtmasaf from public ; 
grant select on mrtmasaf to public ; 
