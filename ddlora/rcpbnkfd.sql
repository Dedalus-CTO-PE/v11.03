create table rcpbnkaf
(
rcbnrecn    varchar2(12),
rcbntdat    varchar2(8),
rcbntotp    number(14,2),
rcbncdrw    varchar2(6),
rcbnmhos    varchar2(3),
rcbnmdhs    varchar2(2),
rcbnttyp    varchar2(1),
rcbnrcod    varchar2(6),
rcbnstat    varchar2(1),
rcbnbdat    varchar2(8),
rcbnbtim    varchar2(8),
rcbnrdat    varchar2(8),
rcbnrtim    varchar2(8),
rcbnchqa    varchar2(15),
rcbncdat    varchar2(8),
rcbnctim    varchar2(8),
rcbncuid    varchar2(10),
rcbnudat    varchar2(8),
rcbnutim    varchar2(8),
rcbnuuid    varchar2(10),
rcbnspar    varchar2(49),
lf          varchar2(1),
constraint rcpbnka1 primary key( 
rcbnrecn)
)
tablespace indx 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace indx 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym rcpbnkaf for rcpbnkaf;
create unique index rcpbnka2 on rcpbnkaf
(
rcbntdat,
rcbncdrw,
rcbnrecn
)
  tablespace indx 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index rcpbnka3 on rcpbnkaf
(
rcbnrdat,
rcbncdrw,
rcbnrecn
)
  tablespace indx 
initrans 3 
storage ( 
  initial 16k 
); 
create unique index rcpbnka4 on rcpbnkaf
(
rcbnbdat,
rcbnrdat,
rcbncdrw,
rcbnrecn
)
  tablespace indx 
initrans 3 
storage ( 
  initial 16k 
); 
