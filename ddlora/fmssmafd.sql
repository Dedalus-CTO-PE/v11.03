create table fmssyyyy
(
  fmssledg    varchar2(2) default ' ' not null,
  fmssacct    varchar2(12) default ' ' not null,
  fmssa1      number(17,5) default 0 not null,
  fmssa2      number(17,5) default 0 not null,
  fmssa3      number(17,5) default 0 not null,
  fmssa4      number(17,5) default 0 not null,
  fmssa5      number(17,5) default 0 not null,
  fmssa6      number(17,5) default 0 not null,
  fmssa7      number(17,5) default 0 not null,
  fmssa8      number(17,5) default 0 not null,
  fmssa9      number(17,5) default 0 not null,
  fmssa10     number(17,5) default 0 not null,
  fmssa11     number(17,5) default 0 not null,
  fmssa12     number(17,5) default 0 not null,
  fmssa13     number(17,5) default 0 not null,
  fmssc1      number(17,5) default 0 not null,
  fmssc2      number(17,5) default 0 not null,
  fmssc3      number(17,5) default 0 not null,
  fmssc4      number(17,5) default 0 not null,
  fmssc5      number(17,5) default 0 not null,
  fmssc6      number(17,5) default 0 not null,
  fmssc7      number(17,5) default 0 not null,
  fmssc8      number(17,5) default 0 not null,
  fmssc9      number(17,5) default 0 not null,
  fmssc10     number(17,5) default 0 not null,
  fmssc11     number(17,5) default 0 not null,
  fmssc12     number(17,5) default 0 not null,
  fmssc13     number(17,5) default 0 not null,
  fmssspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmssmaa1 primary key( 
fmssledg,
fmssacct)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
