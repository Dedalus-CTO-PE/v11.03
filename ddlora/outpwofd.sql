create table outpwoaf
(
  otpwcntr    varchar2(6) default ' ' not null,
  otpwtier    varchar2(3) default ' ' not null,
  otpwpwei    number(14,4) default 0 not null,
  otpwcdat    varchar2(8) default ' ' not null,
  otpwctim    varchar2(8) default ' ' not null,
  otpwcuid    varchar2(10) default ' ' not null,
  otpwudat    varchar2(8) default ' ' not null,
  otpwutim    varchar2(8) default ' ' not null,
  otpwuuid    varchar2(10) default ' ' not null,
  otpwspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outpwoa1 primary key( 
otpwcntr,
otpwtier)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outpwoa2 on outpwoaf
(
otpwtier,
otpwcntr
)
  tablespace pas_indx; 
