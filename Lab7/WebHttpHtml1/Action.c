Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=70", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Origin", 
		"chrome-extension://biokbpahnhnolgnfoblfflgopeepaoik");

	web_add_auto_header("X-Compress", 
		"null");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(284);

	web_custom_request("178.32.113.122", 
		"URL=http://178.32.113.122/?1543844949436&jp8d91yl", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=ua&k=3Ptr6s8uOorYniyx&t=0&s=0&ip=&po=0&pu=2", 
		LAST);

	web_custom_request("178.32.113.122_2", 
		"URL=http://178.32.113.122/?1543844954263&jp8d91ym", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=ua&k=3Ptr6s8uOorYniyx&t=1543862231&s=0&ip=93.76.140.35&po=18&pu=0", 
		LAST);

	web_custom_request("178.32.113.122_3", 
		"URL=http://178.32.113.122/?1543844954339&jp8d91yn", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=ua&k=3Ptr6s8uOorYniyx&t=1543862231&s=0&ip=93.76.140.35&po=18&pu=0", 
		LAST);

	web_custom_request("r", 
		"URL=http://178.32.113.122/r?1543844954632&jp8d91yo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=ua&k=3Ptr6s8uOorYniyx&s=09fbb5240aeefb6a9a02418ffc9b440e", 
		LAST);

	web_custom_request("r_2", 
		"URL=http://178.32.113.122/r?1543844954644&jp8d91yp", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=ua&k=3Ptr6s8uOorYniyx&s=09fbb5240aeefb6a9a02418ffc9b440e", 
		LAST);

	web_revert_auto_header("DNT");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Compress");

	web_revert_auto_header("X-Requested-With");

	web_add_header("X-Goog-Update-AppId", 
		"mimojjlkmoijpicakmndhoigimigcmbb,oimompecagnajdejgnnjijobebaeigek,hnimpnehoodheedghdeeijklkeaacbdc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,hfnkpimlhhgieaddgfemjhofmfblmnib,ojjgnpkioondelmggbekfhllhdaimnho,llkgjffcdpffmhiakmfcdcblohccpfmo,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,aemomkdncapdnfajjbbcbdebjljbpmpj,gkmgaooipdjhmangpemjhigmamcehddo,copjbmjbojbakpaedmpkhmiplmmehfck,npdjjkjlcidkjlamlmmdelcjbcpdjocm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-70.0.3538.110");

	lr_think_time(90);

	web_custom_request("update2", 
		"URL=http://update.googleapis.com/service/update2?cup2key=8:3169275726&cup2hreq=a8944091e6b5df69d2c7eb4eec78cd7caea86b701543b4e6b84956b2f9f86596", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.1\" dedup=\"cr\" acceptformat=\"crx2,crx3\" sessionid=\"{a0137ffc-3d1d-48aa-9e5d-b34a505f4a39}\" requestid=\"{ac7a64e1-0db4-4ef8-9e79-f85efe03e054}\" updater=\"chrome\" updaterversion=\"70.0.3538.110\" prodversion=\"70.0.3538.110\" lang=\"ru\" updaterchannel=\"\" prodchannel=\"\" os=\"win\" arch=\"x64\" nacl_arch=\"x86-64\" domainjoined=\"0\"><hw physmemory=\"6\"/><os platform=\"Windows\" arch=\"x86_64\" version=\"10.0.17763.134"
		"\"/><updater autoupdatecheckenabled=\"1\" ismachine=\"1\" lastchecked=\"0\" laststarted=\"0\" name=\"Omaha\" updatepolicy=\"-1\" version=\"1.3.33.17\"/><app appid=\"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"31.0.0.153\" brand=\"SQJL\" cohort=\"1:d0j:\" cohortname=\"Chrome [M50... M99]\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{237b7dbb-87e0-42f2-b4a4-c5bd5d32cf22}\"/><packages><package fp=\"1.d4ee3148f99a04964e002a1bfecc7ba27806df0390e8fdfe748c69c1bd4c4aed\"/></packages><"
		"/app><app appid=\"oimompecagnajdejgnnjijobebaeigek\" version=\"4.10.1196.0\" brand=\"SQJL\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{2eaabb96-b877-4873-8c8a-31b95957b0f0}\"/></app><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\"0.57.44.2492\" brand=\"SQJL\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{830a979d-e441-4703-ad59-aa9717515723}\"/><packages><package fp=\"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"/></packages><"
		"/app><app appid=\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\" version=\"9.1\" brand=\"SQJL\" cohort=\"1:bm1:\" cohortname=\"M54ToM99\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{594d9df9-76a8-4a80-8e97-4c40db05dcd9}\"/><packages><package fp=\"1.22c7dfe769f240e50080a6aad4e3412dbb5603194c5237847147f223fd230be9\"/></packages></app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"4857\" brand=\"SQJL\" cohort=\"1:jcl:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\""
		"4354\" ping_freshness=\"{2cfaa325-0fc6-43df-aa50-eed5606824db}\"/><packages><package fp=\"1.f5039a33d4c646d539d38d763aa7eee5407eb0c34f57280fb41c3c0ef26588d0\"/></packages></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"956\" brand=\"SQJL\" cohort=\"1:0:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{ff4dd82d-fb18-4065-b2d8-8160425e7bf9}\"/><packages><package fp=\"1.0a5b1e3e669a0aaaf876d4316ec49784e22e7375d5b73a5d382d5024c90ada08\"/></packages>"
		"</app><app appid=\"llkgjffcdpffmhiakmfcdcblohccpfmo\" version=\"0.0.0.0\" brand=\"SQJL\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{bda799cd-3e94-412d-8d22-c0de45db6721}\"/></app><app appid=\"khaoiebndkojlmppeemjhbpbandiljpe\" version=\"22\" brand=\"SQJL\" cohort=\"1:cux:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{1ee17d89-927e-47dd-b1c3-60600cbe2c5a}\"/><packages><package fp=\""
		"1.186c522b669a2a12fb278978178d295415aff1cd3d46c2fae7ebe6cf60113a52\"/></packages></app><app appid=\"giekcmmlnklenlaomppkphknjmnnpneh\" version=\"6\" brand=\"SQJL\" cohort=\"1:j5l:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{8c8138f9-54e9-4a1b-943a-1b082f624089}\"/><packages><package fp=\"1.2a13f90f48d96d1038efa35a937a1d9bed2f89adccb50f2430ce66a65c395b69\"/></packages></app><app appid=\"aemomkdncapdnfajjbbcbdebjljbpmpj\" version=\"1.0.3.0\" brand=\"SQJL\" "
		"enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{ff86e501-f5a3-4c62-8c59-73ace94940c6}\"/></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"36.182.200\" brand=\"SQJL\" tag=\"stable_eset\" cohort=\"1:lsl:\" cohortname=\"ESET Stable\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{e114751d-4d7b-407e-9d63-62bc4ca66147}\"/><packages><package fp=\"1.71cae647e985b827b31d9d813f9ed326f6ab2b22dfc5b441716bccbcd1e76896\"/></packages></app><app appid=\""
		"copjbmjbojbakpaedmpkhmiplmmehfck\" version=\"2018.9.6.0\" brand=\"SQJL\" cohort=\"1:p1x:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\"{eaa59542-4370-4cc5-8afc-41c3afdf84ce}\"/><packages><package fp=\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"/></packages></app><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" version=\"0.0.0.0\" brand=\"SQJL\" enabled=\"1\"><updatecheck/><ping rd=\"4354\" ping_freshness=\""
		"{06d0193d-9d05-4bfa-81ca-7d4b6bf89786}\"/></app></request>", 
		LAST);

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Origin", 
		"chrome-extension://biokbpahnhnolgnfoblfflgopeepaoik");

	web_add_auto_header("X-Compress", 
		"null");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(455);

	web_custom_request("178.32.113.122_4", 
		"URL=http://178.32.113.122/?1543845499865&jp8d91yq", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=ua&k=3Ptr6s8uOorYniyx&t=1543862231&s=90d1e799964edda78eab3124650c868a&ip=93.76.140.35&po=18&pu=0", 
		LAST);

	web_custom_request("r_3", 
		"URL=http://178.32.113.122/r?1543845501012&jp8d91yr", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=ua&k=3Ptr6s8uOorYniyx&s=09fbb5240aeefb6a9a02418ffc9b440e", 
		LAST);

	lr_think_time(706);

	web_custom_request("178.32.113.122_5", 
		"URL=http://178.32.113.122/?1543846207833&jp8d91ys", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=ua&k=3Ptr6s8uOorYniyx&t=1543862231&s=c650e16d285d65c485ee4206ccf42aed&ip=93.76.140.35&po=18&pu=0", 
		LAST);

	web_custom_request("r_4", 
		"URL=http://178.32.113.122/r?1543846208273&jp8d91yt", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=ua&k=3Ptr6s8uOorYniyx&s=09fbb5240aeefb6a9a02418ffc9b440e", 
		LAST);

	lr_think_time(93);

	web_custom_request("178.32.113.122_6", 
		"URL=http://178.32.113.122/?1543846301897&jp8d91yu", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded; charset=UTF-8", 
		"Body=ua&k=3Ptr6s8uOorYniyx&t=1543862231&s=ae6b96971c3e52d7d8359f7162e2abe1&ip=93.76.140.35&po=18&pu=0", 
		LAST);

	return 0;
}