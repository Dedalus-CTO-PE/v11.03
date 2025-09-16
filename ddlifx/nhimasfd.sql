create table nhiaudma
(
  nhmaaudd    char(8) default ' ' not null,
  nhmaaudt    char(8) default ' ' not null,
  nhmaaudp    char(2) default ' ' not null,
  nhmaaudr    char(1) default ' ' not null,
  nhmaauds    decimal(1,0) default 0 not null,
  nhmaaudo    char(4) default ' ' not null,
  nhmanmpi    char(7) default ' ' not null,
  nhmaurno    char(8) default ' ' not null,
  nhmasurn    char(25) default ' ' not null,
  nhmagiv1    char(20) default ' ' not null,
  nhmagiv2    char(20) default ' ' not null,
  nhmagiv3    char(20) default ' ' not null,
  nhmaprei    char(1) default ' ' not null,
  nhmaadd1    char(35) default ' ' not null,
  nhmaadd2    char(30) default ' ' not null,
  nhmaadd3    char(30) default ' ' not null,
  nhmaadd4    char(30) default ' ' not null,
  nhmaadd5    char(30) default ' ' not null,
  nhmadob     char(8) default ' ' not null,
  nhmaddth    char(8) default ' ' not null,
  nhmadomc    char(4) default ' ' not null,
  nhmares     char(1) default ' ' not null,
  nhmaeth     char(5) default ' ' not null,
  nhmasex     char(1) default ' ' not null,
  nhmadat     char(8) default ' ' not null,
  nhmatim     char(8) default ' ' not null,
  nhmaeth2    char(5) default ' ' not null,
  nhmaeth3    char(5) default ' ' not null,
  nhmaeth4    char(5) default ' ' not null,
  nhmaeth5    char(5) default ' ' not null,
  nhmaeth6    char(5) default ' ' not null,
  nhmaspa     char(26) default ' ' not null,
  lf          char(1)
);
create index nhiaudma on nhiaudma
(
nhmaaudd,
nhmaaudt,
nhmaaudp,
nhmaaudr
);
revoke all on nhiaudma from public ; 
grant select on nhiaudma to public ; 
create table nhimasaf
(
  nhmanmpi    char(7) default ' ' not null,
  nhmaurno    char(8) default ' ' not null,
  nhmasurn    char(25) default ' ' not null,
  nhmagiv1    char(20) default ' ' not null,
  nhmagiv2    char(20) default ' ' not null,
  nhmagiv3    char(20) default ' ' not null,
  nhmaprei    char(1) default ' ' not null,
  nhmaadd1    char(35) default ' ' not null,
  nhmaadd2    char(30) default ' ' not null,
  nhmaadd3    char(30) default ' ' not null,
  nhmaadd4    char(30) default ' ' not null,
  nhmaadd5    char(30) default ' ' not null,
  nhmadob     char(8) default ' ' not null,
  nhmaddth    char(8) default ' ' not null,
  nhmadomc    char(4) default ' ' not null,
  nhmares     char(1) default ' ' not null,
  nhmaeth     char(5) default ' ' not null,
  nhmasex     char(1) default ' ' not null,
  nhmadat     char(8) default ' ' not null,
  nhmatim     char(8) default ' ' not null,
  nhmaeth2    char(5) default ' ' not null,
  nhmaeth3    char(5) default ' ' not null,
  nhmaeth4    char(5) default ' ' not null,
  nhmaeth5    char(5) default ' ' not null,
  nhmaeth6    char(5) default ' ' not null,
  nhmaspa     char(26) default ' ' not null,
  lf          char(1)
);
create unique index nhimasa1 on nhimasaf
(
nhmanmpi
);
create unique index nhimasa2 on nhimasaf
(
nhmaurno
);
revoke all on nhimasaf from public ; 
grant select on nhimasaf to public ; 
