create table sinaudpf
(
sipfaudd    char(8),
sipfaudt    char(8),
sipfaudp    char(2),
sipfaudr    char(1),
sipfauds    decimal(1,0),
sipfaudo    char(4),
sipfpon     char(7),
sipfitm     char(3),
sipfrec     char(2),
sipfdat     char(8),
sipfdel     char(15),
sipfqty     decimal(14,2),
sipfcst     decimal(16,4),
sipfgst     decimal(16,4),
sipfsut     char(15),
sipfndd     char(8),
sipfdup     char(8),
sipfudt     char(6),
sipfedd     char(8),
sipfspa     char(10),
lf          char(1)
);
create index sinaudpf on sinaudpf
(
sipfaudd,
sipfaudt,
sipfaudp,
sipfaudr
);
revoke all on sinaudpf from public ; 
grant select on sinaudpf to public ; 
create table sinpofaf
(
sipfpon     char(7),
sipfitm     char(3),
sipfrec     char(2),
sipfdat     char(8),
sipfdel     char(15),
sipfqty     decimal(14,2),
sipfcst     decimal(16,4),
sipfgst     decimal(16,4),
sipfsut     char(15),
sipfndd     char(8),
sipfdup     char(8),
sipfudt     char(6),
sipfedd     char(8),
sipfspa     char(10),
lf          char(1)
);
create unique index sinpofa1 on sinpofaf
(
sipfpon,
sipfitm,
sipfrec
);
create unique index sinpofa2 on sinpofaf
(
sipfpon,
sipfrec,
sipfitm
);
create  index sinpofa3 on sinpofaf
(
sipfudt
);
create unique index sinpofa4 on sinpofaf
(
sipfdat,
sipfpon,
sipfitm,
sipfrec
);
revoke all on sinpofaf from public ; 
grant select on sinpofaf to public ; 
