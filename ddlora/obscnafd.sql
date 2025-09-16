create table obscnaaf
(
  obcavis     varchar2(8) default ' ' not null,
  obcacid     varchar2(4) default ' ' not null,
  obcadte     varchar2(8) default ' ' not null,
  obcatme     varchar2(8) default ' ' not null,
  obcauid     varchar2(10) default ' ' not null,
  obcaocg     varchar2(3) default ' ' not null,
  obcatyp     varchar2(3) default ' ' not null,
  obcamdl     varchar2(1) default ' ' not null,
  obcahlv     varchar2(3) default ' ' not null,
  obcaslv     varchar2(2) default ' ' not null,
  obcamin     varchar2(6) default ' ' not null,
  obcapt1     varchar2(60) default ' ' not null,
  obcap1d     varchar2(1) default ' ' not null,
  obcapt2     varchar2(60) default ' ' not null,
  obcap2d     varchar2(1) default ' ' not null,
  obcapt3     varchar2(60) default ' ' not null,
  obcap3d     varchar2(1) default ' ' not null,
  obcapt4     varchar2(60) default ' ' not null,
  obcap4d     varchar2(1) default ' ' not null,
  obcauc1     varchar2(3) default ' ' not null,
  obcauc2     varchar2(3) default ' ' not null,
  obcauc3     varchar2(3) default ' ' not null,
  obcauc4     varchar2(3) default ' ' not null,
  obcauc5     varchar2(3) default ' ' not null,
  obcauc6     varchar2(3) default ' ' not null,
  obcauc7     varchar2(3) default ' ' not null,
  obcauc8     varchar2(3) default ' ' not null,
  obcaud1     varchar2(1) default ' ' not null,
  obcaud2     varchar2(1) default ' ' not null,
  obcaud3     varchar2(1) default ' ' not null,
  obcaud4     varchar2(1) default ' ' not null,
  obcadd1     varchar2(8) default ' ' not null,
  obcadd2     varchar2(8) default ' ' not null,
  obcadlu     varchar2(8) default ' ' not null,
  obcatlu     varchar2(8) default ' ' not null,
  obcalid     varchar2(10) default ' ' not null,
  obcaat1     varchar2(8) default ' ' not null,
  obcaat2     varchar2(8) default ' ' not null,
  obcatx1     varchar2(127) default ' ' not null,
  obcaspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint obscnaa1 primary key( 
obcavis,
obcacid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index obscnaa2 on obscnaaf
(
obcavis,
obcadte,
obcatme,
obcacid
)
  tablespace pas_indx; 
