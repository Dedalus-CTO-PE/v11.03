create table bokrx1af
(
  bkrxbnum    varchar2(8) default ' ' not null,
  bkrxpowd    varchar2(3) default ' ' not null,
  bkrxadwd    varchar2(3) default ' ' not null,
  bkrxcdte    varchar2(8) default ' ' not null,
  bkrxpsty    varchar2(1) default ' ' not null,
  bkrxcndt    varchar2(8) default ' ' not null,
  bkrxudf1    varchar2(3) default ' ' not null,
  bkrxudf2    varchar2(3) default ' ' not null,
  bkrxudf3    varchar2(3) default ' ' not null,
  bkrxudf4    varchar2(3) default ' ' not null,
  bkrxudf5    varchar2(3) default ' ' not null,
  bkrxudd1    varchar2(8) default ' ' not null,
  bkrxudd2    varchar2(8) default ' ' not null,
  bkrxudd3    varchar2(8) default ' ' not null,
  bkrxudd4    varchar2(8) default ' ' not null,
  bkrxuff1    varchar2(80) default ' ' not null,
  bkrxuff2    varchar2(80) default ' ' not null,
  bkrxuff3    varchar2(80) default ' ' not null,
  bkrxuff4    varchar2(80) default ' ' not null,
  bkrxedc1    varchar2(10) default ' ' not null,
  bkrxedc2    varchar2(10) default ' ' not null,
  bkrxedc3    varchar2(10) default ' ' not null,
  bkrxodte    varchar2(8) default ' ' not null,
  bkrxoprd    varchar2(3) default ' ' not null,
  bkrxcrdt    varchar2(8) default ' ' not null,
  bkrxcrtm    varchar2(8) default ' ' not null,
  bkrxwebc    varchar2(10) default ' ' not null,
  bkrxlupd    varchar2(8) default ' ' not null,
  bkrxlupt    varchar2(8) default ' ' not null,
  bkrxwebu    varchar2(10) default ' ' not null,
  bkrxasrc    varchar2(3) default ' ' not null,
  bkrxbldt    varchar2(3) default ' ' not null,
  bkrxctty    varchar2(3) default ' ' not null,
  bkrxsgbk    varchar2(1) default ' ' not null,
  bkrxform    varchar2(3) default ' ' not null,
  bkrxcntm    varchar2(8) default ' ' not null,
  bkrxudt1    varchar2(8) default ' ' not null,
  bkrxudt2    varchar2(8) default ' ' not null,
  bkrxpobd    varchar2(3) default ' ' not null,
  bkrxpoec    varchar2(1) default ' ' not null,
  bkrxdiet    varchar2(3) default ' ' not null,
  bkrxtran    varchar2(3) default ' ' not null,
  bkrxatrn    varchar2(3) default ' ' not null,
  bkrxanty    varchar2(3) default ' ' not null,
  bkrxesop    varchar2(5) default ' ' not null,
  bkrxeabr    varchar2(3) default ' ' not null,
  bkrxauby    varchar2(3) default ' ' not null,
  bkrxeaid    varchar2(10) default ' ' not null,
  bkrxdror    varchar2(3) default ' ' not null,
  bkrxudf6    varchar2(3) default ' ' not null,
  bkrxudf7    varchar2(3) default ' ' not null,
  bkrxpaca    varchar2(1) default ' ' not null,
  bkrxspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint bokrx1a1 primary key( 
bkrxbnum)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index bokrx1a2 on bokrx1af
(
bkrxcrdt,
bkrxbnum
)
  tablespace pas_indx; 
