create table hl7fp8af
(
  hlp8rsid    varchar2(64) default ' ' not null,
  hlp8vrid    varchar2(10) default ' ' not null,
  hlp8cnt1    varchar2(4) default ' ' not null,
  hlp8cnt2    varchar2(4) default ' ' not null,
  hlp8tsys    varchar2(50) default ' ' not null,
  hlp8tval    varchar2(200) default ' ' not null,
  hlp8tuse    varchar2(50) default ' ' not null,
  hlp8trnk    varchar2(10) default ' ' not null,
  hlp8tstr    varchar2(40) default ' ' not null,
  hlp8tend    varchar2(40) default ' ' not null,
  hlp8spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fp8a1 primary key( 
hlp8rsid,
hlp8vrid,
hlp8cnt1,
hlp8cnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
