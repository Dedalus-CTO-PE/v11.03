create table priaudex
(
prexaudd    varchar2(8),
prexaudt    varchar2(8),
prexaudp    varchar2(2),
prexaudr    varchar2(1),
prexauds    number(1,0),
prexaudo    varchar2(4),
prexclm     varchar2(3),
dprexflg    varchar2(2),
prexitmn    varchar2(9),
prexsubn    varchar2(3),
prexdat1    varchar2(8),
prexchrg    number(14,2),
prexdat2    varchar2(8),
prexspar    varchar2(15),
lf          varchar2(1)
)
tablespace ibadat0x 
initrans 2 
storage ( 
  initial 16k 
);
create public synonym priaudex for priaudex;
create index priaudex on priaudex
(
prexaudd,
prexaudt,
prexaudp,
prexaudr
)
tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
create table priexcaf
(
prexclm     varchar2(3),
dprexflg    varchar2(2),
prexitmn    varchar2(9),
prexsubn    varchar2(3),
prexdat1    varchar2(8),
prexchrg    number(14,2),
prexdat2    varchar2(8),
prexspar    varchar2(15),
lf          varchar2(1),
constraint priexca1 primary key( 
prexclm,
dprexflg,
prexitmn,
prexsubn,
prexdat1)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym priexcaf for priexcaf;
