create table hicrciaf
(
  hcribtch    varchar2(5) default ' ' not null,
  hcrivpos    varchar2(2) default ' ' not null,
  hcriitmn    varchar2(9) default ' ' not null,
  hcriidat    varchar2(8) default ' ' not null,
  hcriicnt    varchar2(2) default ' ' not null,
  hcrimedi    varchar2(10) default ' ' not null,
  hcricard    varchar2(1) default ' ' not null,
  hcrisurn    varchar2(18) default ' ' not null,
  hcrifnam    varchar2(12) default ' ' not null,
  hcribena    number(14,2) default 0 not null,
  hcribenp    number(14,2) default 0 not null,
  hcribenr    number(14,2) default 0 not null,
  hcriclmn    varchar2(8) default ' ' not null,
  hcrivisn    varchar2(8) default ' ' not null,
  hcrirejr    varchar2(3) default ' ' not null,
  hcrirejd    varchar2(8) default ' ' not null,
  hcrispar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hicrcia1 primary key( 
hcribtch,
hcrivpos,
hcriitmn,
hcriidat,
hcriicnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hicrcia2 on hicrciaf
(
hcriclmn,
hcrivisn,
hcriicnt
)
  tablespace pas_indx; 
