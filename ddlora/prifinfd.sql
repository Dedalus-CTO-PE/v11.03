create table prifinsf
(
  prfnyear    varchar2(4) default ' ' not null,
  prfntype    varchar2(1) default ' ' not null,
  prfncode    varchar2(28) default ' ' not null,
  prfnpera    number(14,2) default 0 not null,
  prfnpr01    number(14,2) default 0 not null,
  prfnpr02    number(14,2) default 0 not null,
  prfnpr03    number(14,2) default 0 not null,
  prfnpr04    number(14,2) default 0 not null,
  prfnpr05    number(14,2) default 0 not null,
  prfnpr06    number(14,2) default 0 not null,
  prfnpr07    number(14,2) default 0 not null,
  prfnpr08    number(14,2) default 0 not null,
  prfnpr09    number(14,2) default 0 not null,
  prfnpr10    number(14,2) default 0 not null,
  prfnpr11    number(14,2) default 0 not null,
  prfnpr12    number(14,2) default 0 not null,
  prfnpr13    number(14,2) default 0 not null,
  prfnlast    number(14,2) default 0 not null,
  prfnmpra    varchar2(6) default ' ' not null,
  prfnspar    varchar2(4) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint prifins1 primary key( 
prfnyear,
prfntype,
prfncode,
prfnmpra)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
