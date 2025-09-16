create table patrcaud
(
sector      varchar2(10),
data        varchar2(255),
lf          varchar2(1),
constraint patrcau1 primary key(
sector)
)
tablespace iba01xx
initrans 2
storage (
  initial 16k
)
enable primary key using index
  tablespace iba01xx
  initrans 3
  storage (
    initial 16k
  );
create public synonym patrcaud for patrcaud;
