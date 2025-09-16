create table nhiaudma
(
  nhmaaudd    varchar2(8) default ' ' not null,
  nhmaaudt    varchar2(8) default ' ' not null,
  nhmaaudp    varchar2(2) default ' ' not null,
  nhmaaudr    varchar2(1) default ' ' not null,
  nhmaauds    number(1,0) default 0 not null,
  nhmaaudo    varchar2(4) default ' ' not null,
  nhmanmpi    varchar2(7) default ' ' not null,
  nhmaurno    varchar2(8) default ' ' not null,
  nhmasurn    varchar2(25) default ' ' not null,
  nhmagiv1    varchar2(20) default ' ' not null,
  nhmagiv2    varchar2(20) default ' ' not null,
  nhmagiv3    varchar2(20) default ' ' not null,
  nhmaprei    varchar2(1) default ' ' not null,
  nhmaadd1    varchar2(35) default ' ' not null,
  nhmaadd2    varchar2(30) default ' ' not null,
  nhmaadd3    varchar2(30) default ' ' not null,
  nhmaadd4    varchar2(30) default ' ' not null,
  nhmaadd5    varchar2(30) default ' ' not null,
  nhmadob     varchar2(8) default ' ' not null,
  nhmaddth    varchar2(8) default ' ' not null,
  nhmadomc    varchar2(4) default ' ' not null,
  nhmares     varchar2(1) default ' ' not null,
  nhmaeth     varchar2(5) default ' ' not null,
  nhmasex     varchar2(1) default ' ' not null,
  nhmadat     varchar2(8) default ' ' not null,
  nhmatim     varchar2(8) default ' ' not null,
  nhmaeth2    varchar2(5) default ' ' not null,
  nhmaeth3    varchar2(5) default ' ' not null,
  nhmaeth4    varchar2(5) default ' ' not null,
  nhmaeth5    varchar2(5) default ' ' not null,
  nhmaeth6    varchar2(5) default ' ' not null,
  nhmaspa     varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index nhiaudma on nhiaudma
(
nhmaaudd,
nhmaaudt,
nhmaaudp,
nhmaaudr
)
tablespace pas_indx; 
create table nhimasaf
(
  nhmanmpi    varchar2(7) default ' ' not null,
  nhmaurno    varchar2(8) default ' ' not null,
  nhmasurn    varchar2(25) default ' ' not null,
  nhmagiv1    varchar2(20) default ' ' not null,
  nhmagiv2    varchar2(20) default ' ' not null,
  nhmagiv3    varchar2(20) default ' ' not null,
  nhmaprei    varchar2(1) default ' ' not null,
  nhmaadd1    varchar2(35) default ' ' not null,
  nhmaadd2    varchar2(30) default ' ' not null,
  nhmaadd3    varchar2(30) default ' ' not null,
  nhmaadd4    varchar2(30) default ' ' not null,
  nhmaadd5    varchar2(30) default ' ' not null,
  nhmadob     varchar2(8) default ' ' not null,
  nhmaddth    varchar2(8) default ' ' not null,
  nhmadomc    varchar2(4) default ' ' not null,
  nhmares     varchar2(1) default ' ' not null,
  nhmaeth     varchar2(5) default ' ' not null,
  nhmasex     varchar2(1) default ' ' not null,
  nhmadat     varchar2(8) default ' ' not null,
  nhmatim     varchar2(8) default ' ' not null,
  nhmaeth2    varchar2(5) default ' ' not null,
  nhmaeth3    varchar2(5) default ' ' not null,
  nhmaeth4    varchar2(5) default ' ' not null,
  nhmaeth5    varchar2(5) default ' ' not null,
  nhmaeth6    varchar2(5) default ' ' not null,
  nhmaspa     varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nhimasa1 primary key( 
nhmanmpi)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nhimasa2 on nhimasaf
(
nhmaurno
)
  tablespace pas_indx; 
